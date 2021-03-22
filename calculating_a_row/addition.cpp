#include <iostream>
#include "calculating.h"
#include <vector>

using namespace std;

void addition (vector <double> num)
{
    int counter = 0;
    cout << "enter how many numbers you want to add up: ";
    cin >> counter;

    if (counter >= (int)num.size())
    {
        throw (1);
    }

    double result = 0;
    int copy_result = 0;

    for (int i = 0; i < counter; ++i)
    {
      result += num[i];
    }
    copy_result = (int)result;
    if ((double)result - (double)copy_result != 0)
    {
       // throw (1.0);
    }

    cout << "the sum of the first ";

    for (int i = 0; i < counter; ++i)
    {
        cout << num[i] << " ";
    }
    cout << " vectors is equal to: " << result <<'\n';

    real_num(num);
}
