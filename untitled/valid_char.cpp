#include <string>
#include <iostream>

using namespace std; // проверка на длинну и содержимое ip;

bool valid_char (string ip)
{
    int point_con = 0;
    if ((int)ip.length() < 7 || (int)ip.length() > 15)
    {
        cout << "ip very small or very big\n";
        return false;
    }
    for (int i = 0; i < (int)ip.length(); ++i)
    {
        if (ip[i] != '.' || (ip[i] < '0' || ip[i] > '9'))
        {
            cout << "ip contains invalid characters\n";
            return false;
        }
        if (ip[i] == '.')
        {
            point_con++;
        }
    }
    if (point_con != 4)
    {
        cout << "incorrect number of points\n";
        return false;
    }
    cout << "ip contains valid characters, all ok\n";
    return true;
}
