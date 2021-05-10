#include <string>
#include <iostream>
#include "check.h"

using namespace std;

void verification_point (string ip)
{
    string num;
    bool error = false;
    for (int i = 0;!error && i < (int)ip.length(); ++i)
    {
          if ((ip[i] == '.') && (ip[i+1] == '.') && (i + 1 <= (int)ip.length()))
          {
              cout << "no\n";
              break;
          }
          else if (ip[i] != '.')
          {
              num += ip[i];
              continue;
          }
          else
          {
              cout << num <<'\n';
              error = num_verification (num);
              num.clear();
          }
    }
    if (!error)
    {
        cout << "no\n";
    }
    else
    {
        cout << "nice ip men :D\n";
    }
}
