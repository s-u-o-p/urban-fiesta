//Bad Words Create

#include "header.h"

using namespace std;

void badwords_new() //Make a new badwords.txt from user input
{
    cout << "When you wish to stop adding words, please type 'X'";
    
}

void badwords_add() //Add to the current
{
            fstream badwords_text ("badwords.txt");
            string badwords_string;
            while (getline(badwords_text, badwords_string))
            {
                cout << badwords_string << "\n";
            }
            getch();
}

int BWcreate()
{
    cout << "\n" << "Running a check to see if badwords.txt is in the same folder BIG is in...\n";
    ifstream badwords("badwords.txt");
    string addnewkeep;
    addnewkeep:

    if (badwords)
    {
        cout << "badwords.txt exists! Would you like to add to it/keep it as is/make a new one? (add/new/keep) - ";
    }
    else
    {
        string create_badwords;
        cout << "\n";
        cout << "I couldn't find badwords.txt, is it in the same directory that I'm in?\n";
        cout << "If you wish, you can create a new one now or you can restart the program\n";
        cout << "with badwords.txt in the same directory that I'm in. Alternatively, you\n";
        cout << "could create one now? (y/n) - ";
        create_badwords_yn:
        cin >> create_badwords;
        if (create_badwords == "y")
        {
            create_badwords = "1";
        }
        else
        {
            create_badwords = "0";
        }
        
        
        int create_badwords_int = stoi(create_badwords);

        switch (create_badwords_int)
        {
            case 1:
            badwords_new();
            break;

            case 0:
            cout << "\n" << "Please put a badwords.txt in this directory. Press any key to close.\n";
            getch();
            return 0;
            break;
        }
    }
    

    /*if (badwords) {
        cout << "badwords.txt exists! Would you like to add to it/keep it as is/make a new one? (add/new/keep) - ";
        cin >> addnew;
        if (addnew != "add" || addnew != "new" || addnew != "keep")
        {
            cout << "Please enter a valid response.\n";
            goto addnew;
        }
        else if (addnew == "add" || addnew == "Add")
        {
            badwords_add();
        }
        else if (addnew == "new" || addnew == "New")
        {
            badwords_new();
        }
        else if (addnew == "keep" || addnew == "Keep")
        {
            cout << "No new files will be added.\n";
        }
    }*/

    /*else {
        string badwords_yn;
        cout << "I couldn't find badwords.txt, is it in the same directory that I'm in?\n";
        cout << "If you wish, you can create a new one now or you can restart the program\n";
        cout << "with badwords.txt in the same directory that I'm in. Alternatively, you\n";
        cout << "could create one now? (y/n) - ";
        badwords_yn_goto:
        cin >> badwords_yn;
        if (badwords_yn != "y" || badwords_yn != "n")
        {
            
        }
        
    }*/
return 0;
}