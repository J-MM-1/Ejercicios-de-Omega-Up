#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    if (t >= 21 && t <= 29)
    {
        cout << "tibia";
    }
    if (t < 21)
    {
        cout << "fria!" << endl;
        if (t < 15)
        {
            cout << "RIP escamitas :(";
        }
    }
    if (t > 29)
    {
        cout << "caliente!" << endl;
        if (t > 34)
        {
            cout << "RIP escamitas :(";
        }
    }

    return 0;
}