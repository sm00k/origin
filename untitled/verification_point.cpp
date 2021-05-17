#include <string>
#include <iostream>
#include "check.h"

using namespace std;

bool verification_point (string ip)
{
    if (ip[0] == '.' || ip[(int)ip.length() - 1] == '.')
    {
        return false;
    }
   for (int i = 0; i < (int)ip.length(); ++i)
   {
      if (ip[i] == '.' && ip[i+1] == '.' && ip[i+1] < (int)ip.length())
      {
          return false;
      }
   }
}
