#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	while (true)
	{
		cout << "введите три числа: ";
		double a, b, c;
		cin >> a >> b >> c;
		const double  nb = 4;
		double result = (b * b) - (nb * a * c);
		double one_x = 0, two_x = 0;
		if (result < 0)
		{
			cout << "корней нет\n";
		}
		else if (result == 0)//один корень
		{
			one_x = (-b + sqrt(result)) / (a * 2);
			cout << "корень уровнения: " << one_x << '\n';
		}
		else
		{
			one_x = (-b + sqrt(result)) / (a * 2);
			two_x = (-b - sqrt(result)) / (a * 2);
			cout << "корни уровнения: " << one_x << "\t" << two_x << '\n';
		}
	}
}