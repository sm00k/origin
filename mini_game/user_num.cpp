#include "mini_game.h"
#include <iostream>
#include <vector>

using namespace std;

void user_num (vector <int> &user_number)
{
    cout <<"please enter four-digit number: ";
    char user_enter[255];
    cin >>  user_enter;
    int tmp = 0;
    const int conversion_number = 48;
    for (int i = 0; i < 4; ++i)
    {
        tmp = user_enter[i] - conversion_number;
        user_number.push_back(tmp);
    }
    cout <<"value vectors user: ";
    for (int i = 0; i < (int)user_number.size(); ++i) cout << user_number[i];
    cout <<'\n';


}
