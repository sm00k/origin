#include <iostream>
#include <string>

using namespace std;



void separation (string num, string &left, string &right)
{
    bool dot = false;
    for (int i = 0;!dot && i < (int)num.size(); ++i)
    {
        if (num[i] != '.')
        {
           left += num[i];
           num.erase(i,1);
        }
        else
        {
            dot = true;
            num.erase(i,1);
        }
    }

    if (dot)
    {
        right = num;
    }
}


void user_enter (string &num, string left, string right)
{
    cout << "enter number: ";
    cin >> num;
    bool minus = num.length() > 0 && num[0] == '-';

    bool dot = false;
    int dot_position = 0;

    for (int i = 0; !dot && i < (int)num.length(); i++)
    {
      if (num[i] == '.')
      {
        dot = true;
        dot_position = i;
      }
    }

    bool ok = true;

    int int_start = minus ? 1 : 0;
    int int_end = dot ? dot_position : num.length();

    for (int i = int_start; i < int_end; i++)
    {
      if (num[i] < '0' || num[i] > '9') ok = false;
    }

    int frac_start = dot ? dot_position + 1 : num.length();
    for (int i = frac_start; i < (int)num.length(); i++)
    {
      if (num[i] < '0' || num[i] > '9') ok = false;
    }

    if ((int_end - int_start) + (num.length() - frac_start) == 0) ok = false;

    ok ? separation(num, left, right) : throw (-1);   //передача в следующую функцию
}

int main ()
{
    try
    {
        string one_num,two_num, one_left_half, one_righ_half, two_left_half, two_right_half;
        user_enter(one_num, one_left_half, one_righ_half);

    }
    catch (int)
    {
      cerr << "incorrect number input";
    }

}
