#include <iostream>
#include <string>
#include <regex>
#include <exception>

using namespace std;

void input_validation (string row)
{
    const int max_line_size = 9;
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

void matrix_entry (string row, char matrix[3][3])
{
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
           matrix[i][j] = row[j];
        }
        for (int count = 0; count < 3; ++count)
        {
            row.erase(0,1);
        }
    }
}

bool horizontal_check (char (matrix)[3][3],const char symbol)
{
    const int winer = 3;
    int symbol_counter = 0;
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            if (matrix[i][j] == symbol)
            {
                ++symbol_counter;
            }

        }
        if (symbol_counter == winer)
        {
            return true;
        }
        symbol_counter = 0;
    }
    return false;
}

bool vertical_check (char (matrix)[3][3],const char symbol)
{
    const int winer = 3;
    int symbol_counter = 0;
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            if (matrix[j][i] == symbol)
            {
               ++symbol_counter;
            } 
        }
        if (symbol_counter == winer)
        {
            return true;
        }
        symbol_counter = 0;
    }
    return false;
}

bool check_diagonally_from_left_to_right (char matrix[3][3],const char symbol)
{
    const int winer = 3;
    int symbol_counter = 0;
    for (int i = 0; i < 3; ++i)
    {
        if (matrix[i][i] == symbol)
        {
            ++symbol_counter;
        }
    }
    if (symbol_counter == winer)
    {
        return true;
    }
    return false;
}

bool check_diagonally_from_right_to_left (char matrix[3][3],const char symbol)
{
    const int winer = 3;
    int symbol_counter = 0;
    int count = 2;
    for (int i = 0; i < 3; ++i)
    {
        if (matrix[i][count] == symbol)
        {
            ++symbol_counter;
        }
        --count;
    }
    if (symbol_counter == winer)
    {
        return true;
    }
    return false;
}

void search_for_a_winner (char matrix[3][3], bool &win, const char symbol)
{
   int count_win = 0;
   if (horizontal_check(matrix, symbol))
   {
       win = true;
       ++count_win;
   }

   if (vertical_check(matrix, symbol))
   {
       win = true;
       ++count_win;
   }

   if (check_diagonally_from_left_to_right(matrix, symbol))
   {
       win = true;
       ++count_win;
   }

   if (check_diagonally_from_right_to_left(matrix, symbol))
   {
       win = true;
       ++count_win;
   }

   if (count_win > 1)
   {
       throw "incorrect";
   }
}


int main ()
{
    try
    {
       string row, first_row, secord_row, third_row;
       cout << "enter the game result: ";
       cin >> first_row >> secord_row >> third_row;
       row += first_row + secord_row + third_row;
       input_validation(row);

       const int row_size = 3;
       const int columns_size = 3;
       char matrix[row_size][columns_size];
       matrix_entry(row, matrix);

       int crosses_counter = 0, zeros_counter = 0;
       for (int i = 0; i < (int)row.size(); ++i)
       {
           if (row[i] == 'X')
           {
               ++crosses_counter;
           }
           else if (row[i] == 'O')
           {
               ++zeros_counter;
           }
       }

       bool crosses_win = false, zeros_win = false;
       const char cross = 'X';
       const char zero = 'O';
       search_for_a_winner(matrix, crosses_win, cross);
       search_for_a_winner(matrix, zeros_win, zero);

       if (crosses_win && !zeros_win && crosses_counter > zeros_counter)
       {
           cout << "Petya won\n";
       }
       else if (!crosses_counter && zeros_win && crosses_counter == zeros_counter)
       {
           cout << "Vanya won\n";
       }
       else if (!crosses_win && !zeros_win)
       {
           cout << "Nobody\n";
       }
       else
       {
           throw "incorrect";
       }

    }
    catch (const char *ex)
    {
        cout << ex <<'\n'; // ошибка не коректности результата.
    }
    catch (...)
    {
        cout << "Something went wrong";
    }

}
