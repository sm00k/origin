#include <iostream>
#include <string>

using namespace std;

void user_enter (string &num)
{
    cout << "enter num: ";
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

     cout << (ok ? "yes" : throw (-1)) << '\n';

}


int main ()
{
    while (true)
    {
        try
        {
            string one_num, two_num;
            user_enter(one_num);
            user_enter(two_num);
            cout << one_num <<'\t' << two_num << '\n';
        }
        catch (int)
        {
            cerr << "incorrect number input\n";
        }
    }

}
