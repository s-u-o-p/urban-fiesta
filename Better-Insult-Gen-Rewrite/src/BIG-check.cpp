//Bad Words Create

#include "header.h"

using namespace std;

void BW_check()
{
    cout << "\n" << "Running a check to see if badwords.txt is in the same folder BIG is in...\n";
    ifstream badwords("badwords.txt");

    if (badwords)
    {
        string newkeep;
        cout << "badwords.txt exists! Moving on...\n";
        bw_insult();
    }
    else
    {
        string create_badwords;
        cout << "\n";
        cout << "I couldn't find badwords.txt, is it in the same directory that I'm in?\n";
        cout << "Please restart the program with badwords.txt in the same directory that I'm in.\n";
        getch();
    }
}