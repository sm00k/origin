#include <vector>
#include <iostream>

using namespace std;

void point (vector <int> &v)
{

    int pon = 1;
    for (int i = 0; i < 10; ++i)
    {
        v.push_back(pon + i);
    }
    cout << "result pv: ";
    for (int i = 0; i < (int)v.size(); ++i)
    {
        cout <<v[i];
    }
    cout << '\n';
}
