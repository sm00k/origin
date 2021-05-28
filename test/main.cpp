#include <iostream>
#include <string>

using namespace std;

int main ()
{
    while (true)
    {
       string s, p;
       cout << "enter s: ";
       cin >> s;
       cout << "enter p: ";
       cin >> p;
       cout << s << " + " << p << " = " << stoi(s) + stoi(p) << '\n';

    }

}
