/*
* SatanSelector
* Author - suop
*/

#include <iostream>
using namespace std;

int people;
int peoplesub1 = -1 + people;
string playername;

void playerRegister(){
int goingup = 1;

while(0 != people){
cout << "Player" << goingup << "Name - ";
cin >> playername;
cout << playername << " added! Only " << people - 1 << " left to go!\n";
if(people <= 1){
    cout << "Everybody's in!\n";
}
cout << "\n";
++goingup;
--people;

}

}

int main(){

cout << "~~Satan Selector~~\n";
cout << "How many people do you want to be in the running for Satan? - ";
cin >> people;
cout << "\n";
playerRegister();

}