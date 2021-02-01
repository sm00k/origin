#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    vector <int> v = { 2, 2, 2, 2, 3, 4, 6, 6, 8, 8, 8, 9, 10, 11, 12 };
    vector <int> matches;
    vector <int> number;
    int counter = 0;
    int t = 1;
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size();)
    {

        if (v.size() > 1)
        {
            if (v[i] == v[t])
            {
                number.push_back(v[i]);
            }
        }

        for (int j = i + 1; j < v.size(); ++j)
        {

            if (v[i] == v[j])
            {

                counter++;
            }

        }

        for (int p = 0; p < counter + 1; ++p)
        {
            v.erase(v.begin());
        }

        if (counter > 0)
        {
            matches.push_back(counter);
        }
        counter = 0;
    }
    for (int y = 0; y < matches.size(); ++y)
    {
        cout << "кол-во повторений: " << matches[y] << '\n';
    }
    for (int n = 0; n < number.size(); ++n)
    {
        cout << "число: " << number[n] << '\n';
    }


}