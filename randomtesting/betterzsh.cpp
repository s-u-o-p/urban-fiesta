/*
* made by suop, the better zsh
*/

#include <iostream>
#include <fstream>
#include <unistd.h>
using namespace std;

int no;
bool isxorg = false;
bool isyay = false;

void Hacker()
{
    system("cat /dev/random");
}

void Yay()
{
}

void Startx()
{
    system("kill -9 -1");
}

void Help()
{
    cout << "You can run: \n";
    cout << "pacman    yes    sudo    hacker";
    if (isxorg == true)
    {
        cout << "    startx";
    }
    if (isyay == true)
    {
        cout << "    yay";
    }
    cout << "\n";
}

void Pacman()
{
    string pacmaninput;
    cout << "What package do you want to download?\n";
    cout << "yay  ";
    cout << "  xorg\n";
    cin >> pacmaninput;
    if (pacmaninput == "yay")
    {
        cout << "Installing Yay\n";

        cout << "----------\n";
        sleep(1);
        cout << "0---------\n";
        sleep(1);
        cout << "00--------\n";
        sleep(1);
        cout << "000-------\n";
        sleep(1);
        cout << "0000------\n";
        sleep(1);
        cout << "00000-----\n";
        sleep(1);
        cout << "000000----\n";
        sleep(1);
        cout << "0000000---\n";
        sleep(1);
        cout << "00000000--\n";
        sleep(1);
        cout << "000000000-\n";
        sleep(1);
        cout << "0000000000\n";
        cout << "Yay is now succesfully installed!\n";
        isyay = true;
    }
    else if (pacmaninput == "xorg")
    {
        cout << "Installing xorg\n";

        cout << "----------\n";
        sleep(1);
        cout << "0---------\n";
        sleep(1);
        cout << "00--------\n";
        sleep(1);
        cout << "000-------\n";
        sleep(1);
        cout << "0000------\n";
        sleep(1);
        cout << "00000-----\n";
        sleep(1);
        cout << "000000----\n";
        sleep(1);
        cout << "0000000---\n";
        sleep(1);
        cout << "00000000--\n";
        sleep(1);
        cout << "000000000-\n";
        sleep(1);
        cout << "0000000000\n";

        cout << "Xorg is succesfully installed!\n";
        isxorg = true;
    }
}

void Yes()
{
    string yesinput;
    cout << "input something:";
    cin >> yesinput;
    while (no != 1)
    {
        cout << yesinput;
    }
}

void Sudo()
{
    string password;
    cout << "[sudo] password for user: ";
    cin >> password;
    cout << "You are now not Superuser\n";
}

int main()
{
    string input;

    while (no != 1)
    {
        cout << ">>> ";
        cin >> input;

        if (input == "yes")
        {
            Yes();
        }
        else if (input == "sudo")
        {
            Sudo();
        }
        else if (input == "pacman")
        {
            Pacman();
        }
        else if (input == "help")
        {
            Help();
        }
        else if (input == "startx" && isxorg == true)
        {
            Startx();
        }
        else if (input == "yay" && isyay == true)
        {
            Yay();
        }
        else if (input == "hacker")
        {
            Hacker();
        }
    }
}