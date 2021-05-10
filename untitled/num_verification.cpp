#include <iostream>
#include <string>

using namespace std;

bool num_verification (string &num)
{
    cout << num.length() <<'\n';
    for (int i = 0; i < (int)num.length(); ++i)
    {
        if (num[i] < '0' || num[i] > '9')
        {
            return true;
        }
    }
    if ((int)num.length() > 3)
    {
      return true;
    }
    else if ((int)num.length() > 1 && num[0] == '0')
    {
        return true;
    }
    else
    {
        return false;
    }


}
