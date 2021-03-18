#include <iostream>
#include "calculating.h"
#include <vector>

using namespace std;

void addition (vector <int> num)
{
    int counter = 0;
    cout << "enter how many numbers you want to add up: ";
    cin >> counter;

    if (counter >= num.size())
    {
        throw (1);
    }

    int result = 0;

    for (int i = 0; i < counter; ++i)
    {
      result += num[i];
    }

    cout << "the sum of the first ";

    for (int i = 0; i < counter; ++i)
    {
        cout << num[i] << " ";
    }
    cout << " vectors is equal to: " << result <<'\n';
}
