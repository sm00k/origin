#include "mini_game.h"
#include <iostream>
#include <vector>

using namespace std;

int main ()
{
    vector <int> user_number;
    vector <int> random;
    while (true)
    {
        random.clear();
        record_random (random);
        bool stop_cycle = true;
        while (stop_cycle)
        {
             user_number.clear();
            user_num (user_number);
            comparison_and_calculation (random, user_number, stop_cycle);
        }
    }
}
