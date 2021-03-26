#include "mini_game.h"
#include <vector>
#include <iostream>

using namespace std;

void record_random (vector <int> &random)
{
    int min = 0, max = 9;
    for (int i = 0; i < 4; ++i)
    {
        random.push_back(rand_num(min, max));
    }
    cout <<"value vectors random: ";
    for (int i = 0; i < (int)random.size(); ++i) cout << random[i];
    cout << '\n';


}
