#include <iostream>
#include <string>

using namespace std;

string encryption (string &str, int num)
{
    const char alphabet [26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    const int alphabet_size = 26;
    bool stop = false;
    if (num > 0)
    {
        if (num > alphabet_size)
        {
            num %= alphabet_size;
        }
       for (int i = 0; i < (int)str.size(); ++i)
       {
           stop = false;
           for (int n = 0;!stop && n < alphabet_size; ++n)
           {
               if (str[i] == alphabet[n])
               {
                   if (n+num >= alphabet_size)
                   {
                       n = num - (alphabet_size - n);
                       str[i] = alphabet[n];
                       stop = true;
                   }
                   else
                   {
                       str[i] = alphabet[n+num];
                       stop = true;
                   }

               }
           }
       }
    }
    else
    {
        if (num < -alphabet_size)
        {
           num %= -alphabet_size;
        }

        for (int i = 0; i < (int)str.size(); ++i)
        {
          stop = false;
          for (int n = 0;!stop && n < alphabet_size; ++n)
          {
              if (str[i] == alphabet[n])
              {
                  if (n + num < 0)
                  {
                      str[i] = alphabet[alphabet_size + (n + num)];
                      stop = true;
                  }
                  else
                  {
                      str[i] = alphabet[n+num];
                      stop = true;
                  }
              }
          }
        }
    }
   return str;
}

string decryption (string &str, int num)
{
    const char alphabet [26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    const int alphabet_size = 26;
    bool stop = false;
    if (num > 0)
    {
        if (num > alphabet_size)
        {
            num %= alphabet_size;
        }
        num = -num;
        for (int i = 0; i < (int)str.size(); ++i)
        {
          stop = false;
          for (int n = 0;!stop && n < alphabet_size; ++n)
          {
              if (str[i] == alphabet[n])
              {
                  if (n + num < 0)
                  {
                      str[i] = alphabet[alphabet_size + (n + num)];
                      stop = true;
                  }
                  else
                  {
                      str[i] = alphabet[n+num];
                      stop = true;
                  }
              }
          }
        }
    }
    else
    {
        if (num < 0)
        {
            num %= -alphabet_size;
        }
        num = -num;
        for (int i = 0; i < (int)str.size(); ++i)
        {
            stop = false;
            for (int n = 0;!stop && n < alphabet_size; ++n)
            {
                if (str[i] == alphabet[n])
                {
                    if (n+num >= alphabet_size)
                    {
                        n = num - (alphabet_size - n);
                        str[i] = alphabet[n];
                        stop = true;
                    }
                    else
                    {
                        str[i] = alphabet[n+num];
                        stop = true;
                    }

                }
            }
        }
    }
    return str;
}


int main ()
{

    string str;
    cout << "enter your message: ";
    getline(cin, str);
    int num;
    cout << "enter encoding number: ";
    cin >> num;
    cout <<  encryption(str, num) << '\n';
    cout << decryption(str, num) <<'\n';
}
