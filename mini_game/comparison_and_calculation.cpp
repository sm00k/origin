#include "mini_game.h"
#include <vector>
#include <iostream>

using namespace std;

void comparison_and_calculation (vector <int> &random,vector <int> &user_number, bool &stop_cycle)
{
    int bull = 0;
    int cow = 0;
    for (int i = 0; i < (int)random.size(); ++i)
    {
        for (int j = 0; j < (int)user_number.size();++j)
        {
            if (i == j && random[i] == user_number[j])
            {
               ++bull;
            }
            else if (i != j && random[i] == user_number[j])
            {
                ++cow;
            }
        }
        if (bull >= 4) stop_cycle = false;
    }
    cout << "bulls: " << bull << '\t' << "cows: " << cow << '\n';
    cout <<"value vectors all: ";
    for (int i = 0; i < (int)random.size(); ++i) cout << random[i];
    cout << '\t';
    for (int i = 0; i < (int)user_number.size(); ++i) cout << user_number[i];
    cout <<'\n';

}
