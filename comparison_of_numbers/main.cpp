#include <iostream>
#include <string>
#include <tuple>

using namespace std;

struct Conversion_value
{
    int left_half = 0;
    int right_half = 0;
};

void conversion_to_num (string left_half_num, string right_half_num, Conversion_value(&numbers_one))
{
    cout << "input conversion: " << left_half_num << '\t' << right_half_num << '\n';

  numbers_one.left_half = stoi(left_half_num);
  numbers_one.right_half = stoi(right_half_num);
  cout << "conversion: " << numbers_one.left_half << '\t' << numbers_one.right_half << '\n';
}

void separation (string num, int dot_position, bool minus, Conversion_value(&numbers_one))
{
  string left_half_num, right_half_num;
  for (int i = 0; i < dot_position; ++i)
  {
      left_half_num += num[i];
  }
  if (dot_position == 0)
  {
      right_half_num = "0";
      for (int i = 0; i < (int)num.size(); ++i)
      {
         left_half_num += num[i];
      }
  }
  else
  {
      for (int i = dot_position + 1; i < (int)num.size(); ++i)
      {
          right_half_num += num[i];
      }
  }
  if (minus)
  {
      right_half_num.insert(0, 1, '-');
  }
  cout << "separation: " << left_half_num << '\t' << right_half_num << '\n';

  conversion_to_num(left_half_num, right_half_num, numbers_one);
}


void user_enter (string num, Conversion_value(&numbers_one))
{
    cout << "enter number: ";
    cin >> num;
    bool minus = num.length() > 0 && num[0] == '-';

    bool dot = false;
    int dot_position = 0;

    for (int i = 0; !dot && i < (int)num.length(); i++)
    {
      if (num[i] == '.')
      {
        dot = true;
        dot_position = i;
      }
    }

    bool ok = true;

    int int_start = minus ? 1 : 0;
    int int_end = dot ? dot_position : num.length();

    for (int i = int_start; i < int_end; i++)
    {
      if (num[i] < '0' || num[i] > '9') ok = false;
    }

    int frac_start = dot ? dot_position + 1 : num.length();
    for (int i = frac_start; i < (int)num.length(); i++)
    {
      if (num[i] < '0' || num[i] > '9') ok = false;
    }

    if ((int_end - int_start) + (num.length() - frac_start) == 0)
    {
        ok = false;
    }

    if (ok)
    {
        if (int_start == int_end)
        {
            num.insert(1, 1, '1');
        }
      separation(num, dot_position, minus, numbers_one);
    }
    else
    {
        throw (1);
    }
}

void comparison (Conversion_value(numbers_one), Conversion_value(numbers_two))
{
    if (numbers_one.left_half > numbers_two.left_half)
    {
        cout << "more\n";
        cout <<"comparison: " << numbers_one.left_half << '\t' << numbers_two.left_half <<'\n';
    }
    else if (numbers_one.left_half < numbers_two.left_half)
    {
        cout << "less\n";
        cout <<"comparison: " << numbers_one.left_half << '\t' << numbers_two.left_half <<'\n';
    }
    else
    {
        if (numbers_one.right_half > numbers_two.right_half)
        {
            cout << "more\n";
            cout << "two\n";
        }
        else if (numbers_one.right_half < numbers_two.right_half)
        {
            cout << "less\n";
        }
        else
        {
            cout << "equally\n";
            cout <<"comparison: " << numbers_one.left_half << '\t' << numbers_two.left_half <<'\n';
        }
    }
}

int main ()
{
    try
    {
        Conversion_value numbers_one;
        Conversion_value numbers_two;
        string one_num, two_num;
        user_enter(one_num, numbers_one);
        user_enter(two_num, numbers_two);
        comparison(numbers_one, numbers_two);

    }
    catch (int)
    {
      cerr << "incorrect number input";
    }

}
