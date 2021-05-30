#include <iostream>
#include <string>
#include <regex>
#include <exception>

using namespace std;


struct repetitions_per_line
{
    int crosses = 0, zeros = 0, dots = 0;
};

void input_validation (string row)
{
    const int max_line_size = 3;
    regex regular ("[X,O,.]+");
    if (!regex_match(row, regular))
    {
        throw "incorrect";
    }
    else if (row.size() != max_line_size)
    {
        throw "incorrect";
    }
}

void count_repet_in_a_line (string row, repetitions_per_line(&struct_row))
{
    for (int i = 0; i < (int)row.size(); ++i)
    {
       if (row[i] == 'X')
       {
           struct_row.crosses++;
       }
       else if (row[i] == 'O')
       {
           struct_row.zeros++;
       }
       else
       {
           struct_row.dots++;
       }
    }
}

void game_analysis (repetitions_per_line(first), repetitions_per_line(second), repetitions_per_line(thirst))
{

}

int main ()
{
    try
    {
       string first_row = "X.O", second_row = "OOX", third_row = "XXO";
       cout << "first row: ";
       //cin >> first_row;
       cout << "second row: ";
       //cin >> second_row;
       cout << "third row: \n";
       //cin >> third_row;

       input_validation(first_row);
       input_validation(second_row); // проверка строк на соответствие требованиям
       input_validation(third_row);

       repetitions_per_line first_str;
       repetitions_per_line second_str; // инициализация структур для каждой строки
       repetitions_per_line third_str;

       count_repet_in_a_line(first_row, first_str);
       count_repet_in_a_line(second_row, second_str); // подсчет кол-во крестиков, ноликов и точек в строках
       count_repet_in_a_line(third_row, third_str);

       //cout << first_str.crosses << '\t' << first_str.zeros << '\t' << first_str.dots << '\n';
      // cout << second_str.crosses << '\t' << second_str.zeros << '\t' << second_str.dots << '\n';
      // cout << third_str.crosses << '\t' << third_str.zeros << '\t' << third_str.dots << '\n';
    }
    catch (const char *ex)
    {
        cout << ex <<'\n';
    }
    catch (...)
    {
        cout << "Something went wrong";
    }

}
