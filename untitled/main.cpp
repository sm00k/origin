#include <iostream>
#include <string>
#include "check.h"
using namespace std;

int main ()
{
    while (true)
    {
        string ip;
        cout << "please, enter ip adres: ";
        cin >> ip;
        if (ip.length() < 7 || ip.length() > 15)
        {
            cout << "length string very small or very big\n";
        }
        else if (ip[0] == '.' || ip[ip.length() -1] == '.')
        {
            cout << "begin . or end .\n";
        }
        else
        {
            cout  << "1\tpassed to the function\n";
            verification_point(ip);

        }
    }
    return 0;
}
