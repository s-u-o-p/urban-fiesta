/*
* SatanSelector
* Author - suop
*/

#include <iostream>
#include <vector>
using namespace std;

int people;
int peoplesub1 = -1 + people;
string playername;
vector<string> players;

void playerRegister(){
int goingup = 1;

while(0 != people){
cout << "Player" << goingup << "'s Name - ";
cin >> playername;
if(people <= 1){
    cout << playername << " added! " << "Everybody's in!\n";
}
else if(people > 1){
cout << playername << " added! Only " << people - 1 << " left to go!\n";
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