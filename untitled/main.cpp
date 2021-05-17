#include <iostream>
#include <string>
#include <regex>

using namespace std;

void num (string ip)
{
    string num;
    for (int i = 0; i < (int)ip.size(); ++i)
    {
        if (ip[i] != '.')
        {
            num;
        }
    }
}

int main ()
{
    string ip = "2.1.2.2";
    //cout << "please, enter ip adres: ";
    //cin >> ip;
    regex regular ("[\\d]{1,3}[.]{1}[\\d]{1,3}[.]{1}[\\d]{1,3}[.]{1}[\\d]{1,3}");
    if (regex_match(ip.c_str(),regular))
    {
        cout << "yes";
    }
    else
    {
        cout << "no";
    }

}
