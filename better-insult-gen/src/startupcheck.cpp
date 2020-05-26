#include "header.h"

using namespace std;

int StartupCheck()
{
    cout << "This all working?\n";
    cout << "Good, now onto making sure everything works!\n";

    ifstream bad_words_txt("badwords.txt");
    string badwords_read;
    while (getline(bad_words_txt, badwords_read)) {
        cout << badwords_read << "\n";
    }
    bad_words_txt.close();
    cout << "If the badwords.txt file did not just output please make sure that it is in the folder you're in now\n";
    cout << "Press any key to continue...\n";
    getch();

    badwordsvector();
    return 0;
}