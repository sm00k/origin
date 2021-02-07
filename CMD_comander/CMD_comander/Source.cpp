#include <iostream>
#include <windows.h>
#include <string>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	cout << "введите время отключения в секундах: ";
	string second;
	cin >> second;
	string result = "shutdown /s -t " + second;
	cout << "для подтвержения введте Y/N: ";
	char answer;
	cin >> answer;
	if (answer == 'Y' || answer == 'y')
	{
		system(result.c_str());
	}
	cout << "для отмены введите stop ";
	string cancel;
	cin >> cancel;
	if (cancel == "stop")
	{
		system("shutdown /a");
	}
	
}