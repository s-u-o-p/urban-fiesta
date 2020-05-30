//Bad Words Create

#include "header.h"

using namespace std;

void badwords_new() //Make a new badwords.txt from user input
{
    cout << "When you wish to stop adding words, please hit enter without entering any text.\n";
    string inputwords;
    fstream badwords_file ("badwords.txt");
    while (inputwords.size() != 0)
    {
        getline(cin, inputwords);
        badwords_file << inputwords << "\n";
    }
    cout << "All done!\n";
    getch();
}

int BWcreate()
{
    cout << "\n" << "Running a check to see if badwords.txt is in the same folder BIG is in...\n";
    ifstream badwords("badwords.txt");

    if (badwords)
    {
        string newkeep;
        cout << "badwords.txt exists! Would you like to keep it as is or make a new one? (new/keep) - ";
        cin >> newkeep;
        if (newkeep == "new")
        {
            badwords_new();
        }
        else
        {
            cout << "Keeping badwords.txt...\n";
        }

                

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
        if (create_badwords == "y") //Really fucking stupid way to get badwords yes or no into a string
        {
            create_badwords = "1";
        }
        else
        {
            create_badwords = "0";
        }
        
        
        int create_badwords_int = stoi(create_badwords);

        switch (create_badwords_int) //Switch statement for if badwords should be made or close the program
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
    
return 0;
}