//Bad Words Create

#include "header.h"

using namespace std;

int BWcreate()
{
    cout << "\n" << "Running a check to see if badwords.txt is in the same folder BIG is in...";
    
    ifstream badwords("badwords.txt");
    if (badwords) {
        cout << "badwords.txt exists! Would you like to add to it/make a new one? (add/new) - ";
    }
    else {
        cout << "I couldn't find badwords.txt, is it in the same directory that I'm in?\n";
        cout << "If you wish, you can create a new one now or you can restart the program\n";
        cout << "with badwords.txt in the same directory that I'm in. Alternatively, you\n";
        cout << "could create one now? (y/n) - ";
    }

return 0;
}