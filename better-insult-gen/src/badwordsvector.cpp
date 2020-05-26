#include "header.h"

using namespace std;

int linecount;

vector<string> badwords_vector; //initalising a string

void badwordrandomchoice() {

    int rng_number;

    string seedtime;
    cout << "Would you like to enter a seed or make one from the current time? (seed/time) - ";
    cin >> seedtime;

    srand (time(NULL)); //Generating a seed from the current time

    rng_number = rand() % linecount + 1;
    // cout << badwords_vector[rng_number]; REMEMBER TO USE SQUARE BRACKETS
    the_meat();
}

int badwordsvector(){
    int i = 0;
    fstream bad_words_txt("badwords.txt"); //opening badwords again
    string badwords_read;

    while(getline(bad_words_txt, badwords_read))
    {
        badwords_vector.push_back (badwords_read); //reading each line except this time pushing it to a vector
        linecount++; //adding one to linecount so we can see the maximum number for rng
    }

    bad_words_txt.close(); //good practice

    badwordrandomchoice(); //going to badwordrandomchoice
    
    return 0;
}