#include <iostream>
#include <string>

using namespace std;
void convesion (string num, bool &error)
{
    int con_num = 0;
    if ((int)num.size() > 1)
    {
        error = num[0] == '0';
    }

    if (num.size() > 2)
    {
       con_num = (num[0] - 48) * 100;
       con_num += (num[1] - 48) * 10;
       con_num += (num[2] - 48);
       error = con_num > 255;
    }
}

void record (string ip, bool &error)
{
    string num;

    for (int i = 0;!error && i <= (int)ip.size(); ++i)
    {
        if (ip[i]!= '.')
        {
            num += ip[i];
        }
        else
        {
            convesion(num, error);
            num.clear();
        }
    }
    convesion(num, error);
}



int main ()
{
    string ip = "192.168.0.1";
    bool error = false;
    record(ip, error);
    if (!error)
    {
        cout << "yes";
    }
    else
    {
        cout << "no";
    }
    return 0;
}
