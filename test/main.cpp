﻿#include <iostream>
#include <string>
#include <vector>

using namespace std;

void matrix_entry (string row, char (&matrix)[3][3], int &i)
{
    for (int j = 0; j < 3; ++j)
    {
        matrix[i][j] = row[j];
    }
     ++i;
}

void horizontal_check (char (matrix)[3][3], bool &win, char sumbol)
{
    int count = 0;
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            if (matrix[i][j] == sumbol)
            {
                ++count;
            }
        }
        win = count == 3;
        count = 0;
    }
}

void vertical_check (char (matrix)[3][3], bool &win, char sumbol)
{
    int count = 0;
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            if (matrix[j][i] == sumbol)
            {
                ++count;
            }
        }
        win = count == 3;
        count = 0;
    }
}

void diagonal_check (char (matrix)[3][3], char sumbol)
{
    int con = 0;
    for (int i = 0; i < 3; ++i)
    {
        if (matrix[i][con] == sumbol)
        {
            // что то происходит.
        }
        ++con;
    }

    --con;

    for (int i = 0; i < 3; ++i)
    {
        if (matrix[i][con])
        {
            //что то происходит
        }
        --con;
    }

}

int main ()
{
    string first = "XOX", second = ".OO", third = "X.X";
    char matrix[3][3];
    int i = 0;
    matrix_entry(first, matrix, i);
    matrix_entry(second, matrix, i);
    matrix_entry(third, matrix, i);

    bool cross_win = false;
    bool zero_win = false;
    char cross = 'X', zero = 'O';
    horizontal_check(matrix, cross_win, cross);
    horizontal_check(matrix, zero_win, zero);





}
