#include <iostream>

using namespace std;

int main()
{
    const int str = 3;
    const int colums = 3;
    char playning_field[str][colums] =
    {
        {' ',' ',' '},
        {' ',' ',' '},
        {' ',' ',' '},
    };
    while (true)
    {
        int o = 0;
        int x = 0;
        int coordinate[2];
        cout << "please, enter coordinate: ";
        cin >> coordinate[0] >> coordinate[1];

        if (playning_field[coordinate[0]][coordinate[1]] != ' ')
        {
            continue;
        }

        cout << "please, enter sumbol: ";
        cin >> playning_field[coordinate[0]][coordinate[1]];

        for (int i = 0; i < str; ++i)
        {
            for (int j = 0; j < colums; ++j)
            {

                for (int l = 0; l < str; ++l)
                {

                }
            }
        }
    }
}
