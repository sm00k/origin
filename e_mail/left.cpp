#include <iostream>
#include <string>

using namespace std;

bool left_check (string left_half)
{
    string valid_symbol_library = {'!','#','$','%','&','*','+','-','/','=','?','^','_','`','{','}','|','~','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S',
                                  'T','U','V','W','X','Y','Z','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','1','2','3',
                                  '4','5','6','7','8','9','0','.'};
    if(left_half.size() < 1 || left_half.size() > 64)
    {
        return false;
    }
    for (int i = 0; i < (int)left_half.size(); ++i)
    {
        for (int j = 0; j < (int)valid_symbol_library.size(); ++j)
        {
            if (left_half[i] == valid_symbol_library[j])
            {
                continue;
            }
        }
    }

}
