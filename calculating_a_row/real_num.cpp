#include <iostream>
#include <vector>

using namespace std;

void real_num (vector <double> num)
{
    vector <double> real_number;

    for (int i = 0; i < (int)num.size();++i)
    {
        real_number.push_back(num[i+1] - num[i]);
    }

    cout << "real number line: ";

    for (int i = 0; i < (int)real_number.size(); ++i)
    {
        cout << real_number[i] << "\t";
    }
}
