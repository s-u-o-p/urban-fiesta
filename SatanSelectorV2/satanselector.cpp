/*
* made by suop
* 19th May, 2020
* fml
*/

#include <iostream>
#include <vector>
#include <string.h>

using namespace std;

int NoP; //Number of people
int countdown = NoP;
string name;
int countup = 1;
vector<string> satan_runners;

void AddPlayers()
{
    cout << "Time to add players!\n"
         << "\n";
    while (NoP != 0)
    {
        cout << "Player " << countup << "'s Name > ";
        cin >> name;
        satan_runners.push_back[countup]
        countup++;
        NoP--;
        countup++;
    }
}

int main()
{
    cout << "~~Satan Selector~~\n";
    cout << "\n";
    cout << "How many people do you want in the running for Satan?\n";
    cout << "> ";
    cin >> NoP;
    AddPlayers();
}