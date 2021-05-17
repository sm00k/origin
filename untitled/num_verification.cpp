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
            cout << "sumbol in string does't number\n";
            return true;
        }
    }
    if ((int)num.length() > 3)
    {
        cout <<"sum sumbol in string > 3 ";
      return true;
    }
    else if ((int)num.length() > 1 && num[0] == '0')
    {
        cout << "sum sumbols > 1 and begining sumbol zero\n";
        return true;
    }
    else
    {
        cout << "not are problem in that function\n";
        return false;
    }


}
