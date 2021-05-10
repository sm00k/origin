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
            cout << "1no\n";
        }
        else if (ip[0] == '.' || ip[ip.length() -1] == '.')
        {
            cout << "2no\n";
        }
        else
        {
            cout << "passed to the function\n";
            verification_point(ip);

        }
    }
    return 0;
}
