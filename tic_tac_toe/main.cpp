#include <iostream>
#include <string>
#include <regex>

using namespace std;


struct TIC_TAC
{
    int crosses, zeros, dots;
};

void row_analysis (string row, TIC_TAC(&first))
{
    for (int i = 0; i < (int)row.size(); ++i)
    {
        if (row[i] == 'X')
        {
           ++first.crosses;
        }
        else if (row[i] == 'O')
        {
            ++first.zeros;
        }
        else
        {
          ++first.dots;
        }
    }
}


int main ()
{
    TIC_TAC first, second, third;
    const int row_length = 4;
    string first_row, second_row, third_row;
    regex regular ("[X,O,.]+");
     cin >> first_row >> second_row >> third_row;
    bool cheking_content = regex_match(first_row, regular) && regex_match(second_row, regular) &&
            regex_match(third_row, regular);

    bool cheking_length = first_row.size() < row_length && second_row.size() < row_length &&
            third_row.size() < row_length;


}
