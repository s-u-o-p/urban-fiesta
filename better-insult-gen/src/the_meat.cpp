#include "header.h"

using namespace std;

vector<string> badwords_vector; //initalising a string
int linecount;

void badwordsrandomchoice() {

    int rng_number; //initialising a new integer that will pick a random number from 1 to the amount of words in the badwords.txt text fileand 

    string seedtime;
    incorrectoption2:
    cout << "Would you like to enter a seed or make one from the current time? (seed/time) - ";
    cin >> seedtime;
    if (seedtime != "seed" || seedtime != "time")
    {
        cout << "\n" << "Please select a valid option.\n";
        goto incorrectoption2;
    }
    else if (seedtime == "seed")
    {
        int seed_number;
        cout << "\n" << "Please input a seed - ";
        cin >> seed_number;

        srand (seed_number); // generating seed from user input
    }
    else if (seedtime == "time")
    {
        srand (time(NULL)); // generating seed from current time
    }

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

    badwordsrandomchoice(); //going to badwordrandomchoice
    
    return 0;
}

void the_meat(){

    string username;
    int NoI; //Number Of Insults
    string input_manualbulk;
    
    cout << "Please enter a name: ";
    cin >> username;

    incorrectoption:
    cout << "\n" << "Please pick how you wish to generate your insults. One at a time or in bulk? (manual/bulk) - ";
    cin >> input_manualbulk;
    //x: goto x;
    if (input_manualbulk != "manual" || input_manualbulk != "bulk")
    {
        cout << "\n" << "Please select either 'manual' or 'bulk'\n";
        goto incorrectoption;
    }   
    else if(input_manualbulk == "manual"){

    }
    else if(input_manualbulk == "bulk"){
         
    }
}