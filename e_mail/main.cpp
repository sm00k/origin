#include <iostream>
#include <string>
#include <regex>

using namespace std;

bool dot (string email)
{
    for (int i = 0; i < (int)email.size(); ++i)
    {
        if ((email[i] == '.' && email[i+1] == '.') && i+1 < (int)email.size())
        {
            return false;
        }
    }
    return true;
}


int main ()
{
    string email = "sm00ck.1314@gmail.com";
    //cout << "enter your e-mail: ";
    //cin >> email;
    regex regular ("[\\w-!#$%&'*+/=?^`{|}~]{1}[\\w-.!#$%&'*+/=?^`{|}~]{0,63}(@)[\\w-.]{1,62}[\\w-]{1}");
    if (regex_match(email.c_str(),regular) && dot(email))
    {
        cout << "yes";
    }
    else
    {
        cout << "no";
    }
}
