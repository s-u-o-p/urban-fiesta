#include "header.h"

using namespace std;

int badwordsvector(){
    vector<string> badwords_vector;
    int i = 0;
    fstream bad_words_txt("badwords.txt");
    string badwords_read;

    while(getline(bad_words_txt, badwords_read))
    {
        badwords_vector.push_back (badwords_read);
    }

    bad_words_txt.close();
    
    
    return 0;
}