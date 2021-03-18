#include <iostream>
#include <vector>
#include "calculating.h"

using namespace std;

void enter_num (vector <int> num)
{

    int enter = 0;
    cout << "enter number: ";
    while (cin >> enter)
    {
       cout << "enter number: ";
       num.push_back(enter);
    }

    cin.clear();

    addition(num);
}
