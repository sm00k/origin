#include <iostream>
#include <string>

using namespace std;

void verification_right (string one_right_half, string two_right_half)
{
    int num_one_right = stoi(one_right_half), num_two_right = stoi(two_right_half);
    if (num_one_right > num_two_right)
    {
       cout << "More\n";
    }
    else if (num_one_right < num_two_right)
    {
       cout << "less\n";
    }
    else
    {
        cout << "equal\n";
    }
}

void verification_left (string one_left_half, string two_left_half )
{
    int num_one = stoi(one_left_half), num_two = stoi(two_left_half);
    if (num_one > num_two)
    {
        cout << "More\n";
    }
    else if (num_one < num_two)
    {
        cout << "less\n";
    }
    else
    {
        if (dot)
        {
           cout << "equal\n";
        }
        else
        {
            // переход в следующую функцию.
        }

    }
}

void separation (string num, string &left, string &right, bool dot)
{
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

    ok ? separation(num, left, right, dot) : throw (-1);   //передача в следующую функцию
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
