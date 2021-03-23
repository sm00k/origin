#include <iostream>
#include <vector>
#include "mini_game.h"
#include <cstdlib>
#include <ctime>

using namespace std;

int main ()
{
    srand (static_cast<unsigned int>(time(0)));

    vector <int> rand_num;
    for (int i = 0; i < 4; ++i)
    {
        rand_num.push_back(png());
    }
    for (int i = 0; i < (int)rand_num.size();++i)
    {
        cout << rand_num[i];
    }
    cout << '\n';

    vector <int> player_num;
    int answer = 0;
    bool stop = true;
    while (stop)
    {
        for (int i = 0; i < 4; ++i)
        {
            cout << "enter num: ";
            cin >> answer;
            player_num.push_back(answer);
        }

        int bull = 0, cows = 0;
        for (int i = 0; i < (int)rand_num.size(); ++i)
        {
            for (int j = 0; j < (int)player_num.size(); ++j)
            {
                if (rand_num[i] == player_num[j])
                {
                    if (i == j)
                    {
                        ++bull;
                    }
                    else
                    {
                        ++cows;
                    }
                }
            }
        }
        cout << "bulls: " << bull << '\t' << "cows: " << cows <<'\n';
        if (bull == 4)
        {
          stop = false;
        }
        cin.clear();
        bull = 0;
        cows = 0;
      }
}
