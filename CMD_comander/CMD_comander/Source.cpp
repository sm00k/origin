#include <iostream>
#include <windows.h>
#include <string>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	cout << "������� ����� ���������� � ��������: ";
	string second;
	cin >> second;
	string result = "shutdown /s -t " + second;
	cout << "��� ������������ ������ Y/N: ";
	char answer;
	cin >> answer;
	if (answer == 'Y' || answer == 'y')
	{
		system(result.c_str());
	}
	cout << "��� ������ ������� stop ";
	string cancel;
	cin >> cancel;
	if (cancel == "stop")
	{
		system("shutdown /a");
	}
	
}