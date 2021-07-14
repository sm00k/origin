#include <iostream>
#include <vector>

using namespace std;

int main ()
{
    vector <int> database;
    int data;
    const int database_size = 20;
    cout << "enter data: ";
    while (cin >> data && data != -1)
    {
        if (database.size()  >= database_size)
        {
            database.erase(database.begin());
        }
        database.push_back(data);
    }
    cout << "database content: ";
    for (int i = 0; i < (int)database.size(); ++i)
    {
        cout << database[i] << '\n';
    }
}
