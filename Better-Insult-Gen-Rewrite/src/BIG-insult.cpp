//Bad Words Insult
#include "header.h"

using namespace std;

float rngnumber;

int bw_insult()
{
     string seedmanual;
     manrng:
     cout << "Would you like to input a seed or use a randomly generated one? (man/rng)";
     cin >> seedmanual;

     if (seedmanual == "man")
     {
          cout << "\n" << "Ok, please input a seed - ";
          cin >> rngnumber;
          srand (rngnumber);
     }
     else if (seedmanual == "rng")
     {
          cout << "Ok, making a seed from the current time...\n";
          srand (time(NULL));
     }
     else
     {
          cout << "Please input a valid response.\n";
          goto manrng;
     }
     

     return 0;   
}