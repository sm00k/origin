#include <iostream>
#include <vector>
#include "v.h"

using namespace std;

int main ()
{
    vector <int> v;
    point (v);
    cout << "result v: ";
    for (int i = 0; i < (int)v.size(); ++i)
    {
        cout << v[i];
    }
    cout << '\n';
}
