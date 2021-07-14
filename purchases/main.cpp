#include <iostream>
#include <vector>

using namespace std;

int main ()
{
    vector <double> cost = {2.5, 4.25, 3, 10};
    vector <int> purchases = {1, 1, 0, 3};
    double sum = 0;
    for (int i = 0; i < (int)purchases.size(); ++i)
    {
        sum += cost[purchases[i]];
    }
    cout << "total cost: " << sum;
}
