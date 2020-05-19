/*
* made by suop
* Monday 18th, 2020
* Vectors, oh boy...
*/
#include <iostream>
#include <string.h>
#include <vector>
using namespace std;
int main()
{

    int odd_amount;
    int even_amount;

    double input;
    int counter;
    int NoN; //Number of Numbers

    vector<int> numbers;

    cout << "~~Odd and Even number counter~~\n";
    cout << "How many numbers do you wish to input? - ";
    cin >> NoN;
    cout << "\nPlease input your numbers\n";

    while (NoN != 0)
    {
        cout << "> ";
        cin >> input;
        input = input + 0.5 - (input < 0);
        int intput = (int)input;
        numbers.push_back(intput);
        if (NoN <= 1)
        {
            cout << "All numbers Entered!\n";
            NoN--;
        }
        else
        {
            cout << NoN - 1 << " left to go!\n";
            NoN--;
        }
        for (int i = 0; i < numbers.size(); i++)
        {
            if (numbers[i] % 2 == 0)
            {
                even_amount = even_amount + numbers[i];
            }
            else
            {
                odd_amount = odd_amount + numbers[i];
            }
        }
    }
    cout << "In the numbers you gave me there were " << even_amount << " even numbers and\n";
    cout << odd_amount << " odd numbers.\n";
    return 0;
}