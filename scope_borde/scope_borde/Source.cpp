#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	vector <string> name;
	vector <int> score;
	string enter_name;
	int enter_score;
	while (true)
	{
		cout << "введите имя: ";
		cin >> enter_name;
		if (enter_name == "noname")
		{
			break;
		}
		name.push_back(enter_name);
		cout << "введите счет: ";
		cin >> enter_score;
		score.push_back(enter_score);
		
	}
	for (int i = 0; i < name.size(); ++i)
	{
		cout << "имя: " << name[i] << '\t' << "счет: " << score[i] << '\n';
	}
}