#include "header.h"

using namespace std;

int StartupCheck()
{
    cout << "This all working?\n"; //funny comedy haha
    cout << "Good, now onto making sure everything works!\n";

    ifstream bad_words_txt("badwords.txt"); //opening badwords.txt
    string badwords_read;
    while (getline(bad_words_txt, badwords_read)) { //making a while loop that will repeat until it has read every line
        cout << badwords_read << "\n"; //outputting each line
    }
    bad_words_txt.close(); //closing file (good practice)
    cout << "If the badwords.txt file did not just output please make sure that it is in the folder you're in now\n"; //yet another check
    cout << "Press any key to continue...\n"; //press any key to continue
    getch();

    badwordsvector(); //goes to badwordsvector
    return 0;
}