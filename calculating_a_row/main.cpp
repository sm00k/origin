#include <iostream>
#include <vector>
#include "calculating.h"

using namespace std;

int main ()
{
    try
    {
        vector <int> num;
        while (true)
         {
              enter_num(num);
         }
    }
    catch (int)
    {
        cerr << "vector num range error\n";
    }
}
