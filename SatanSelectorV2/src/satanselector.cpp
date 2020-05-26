/*
* made by suop
* 19th May, 2020
* fml
*/

#include <iostream>
#include <vector>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <unistd.h>
#include <conio.h>

using namespace std;

int NoP;                      //Number of people
int NoP2 = NoP;               //Duplicate of the original Number of people
string name;                  //String to store user inputted data to give to the vector
int countup = 1;              //A simple variable to count up from 1, used in while loops
vector<string> satan_runners; //Initalising the Vector

void Randomise()
{
    int RN; //Random Numeral
    srand(time(NULL));
    RN = rand() % NoP2 + 1;

    cout << "Randomising...\n";
    sleep(1);
    cout << satan_runners[RN] << " is todays winner to be Satan!\n";
    cout << "Press any key to close the program. Thanks for using Satan Selector!";
    getch();
}

void AddPlayers()
{
    cout << "Time to add players!\n"
         << "\n";
    while (NoP != 0)
    {
        cout << "Player " << countup << "'s Name > ";
        cin >> name;
        satan_runners.push_back(name);
        countup++;
        NoP--;
    }
    Randomise();
}

int main()
{
    cout << "~~Satan Selector~~\n";
    cout << "\n";
    cout << "How many people do you want in the running for Satan?\n";
    cout << "> ";
    cin >> NoP;
    NoP2 = NoP;
    AddPlayers();
}