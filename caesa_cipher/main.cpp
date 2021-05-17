#include <iostream>
#include <string>

using namespace std;

string right_cription (string &str, int num)
{
    for (int i = 0; i < (int)str.length(); ++i)
    {
       if (str[i] < 'a' || str[i] > 'z')
       {
           continue;
       }
       else
       {
           if (str[i] + num > 'z')
           {
               str[i] = ((str[i] + num) - 122) + 96;
           }
           else
           {
               str[i] += num;
           }
       }
    }
    return str;
}

string left_cription (string &str, int num)
{
    for (int i = 0; i < (int)str.length(); ++i)
    {
        if (str[i] < 'a' || str[i] > 'z')
        {
            continue;
        }
        else
        {
            if (str[i] + num < 'a')
            {
                str[i] = 122 + (num + (str[i] - 96));
            }
            else
            {
                str[i] += num;
            }
        }
    }
    return str;
}

int main ()
{
    string str;
    cout << "enter str: ";
    getline(cin, str);
    int num;
    cout << "cription num: "; // максимум 26 символов!!! добавить контроль ввода!
    cin >> num;
    if (num > 0)
    {
       cout << right_cription(str, num) << '\n';
       num *= -1;
       cout << left_cription(str,num);
    }
    else
    {
       cout << left_cription(str, num) << '\n';
       num *= -1;
       cout << right_cription(str, num) << '\n';
    }
    return 0;
}
