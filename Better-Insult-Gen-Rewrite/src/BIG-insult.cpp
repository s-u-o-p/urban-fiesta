//Bad Words Insult
#include "header.h"

using namespace std;

float rngnumber;
bool seed_custom = false;
string name;

void bw_insult()
{
     string seedmanual;
     manrng:
     cout << "Would you like to input a seed or use a randomly generated one? (man/rng) - "; //user decides between manual or rng input
     cin >> seedmanual;

     if (seedmanual == "man")
     {
          seed_custom = true;
          cout << "\n" << "Ok, please input a seed - "; // makes a seed from user input
          cin >> rngnumber;
          srand (rngnumber);
     }
     else if (seedmanual == "rng")
     {
          cout << "Ok, making a seed from the current time...\n"; // make a seed from current time
          srand (time(NULL));
     }
     else
     {
          cout << "Please input a valid response.\n";
          goto manrng;
     }
     
     bw_apply_rng();
}

void bw_apply_rng()
{

     string man_rng; //if it is manual or RNG
     string aan; // a or an

     if (seed_custom == true)
     {
          man_rng = "manual";
          aan = "a";
     }
     else
     {
          man_rng = "automatic";
          aan = "an";
     }
     
     cout << "Insult generator running with " << aan << " " << man_rng << " seed.\n";
     
     cout << "Please input the insultees name - ";
     cin >> name;

     bw_insult_gen();
}

void bw_insult_gen()
{



}