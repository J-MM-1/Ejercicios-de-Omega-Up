#include <iostream>
using namespace std;

int main()
{
    int f, c;
    cin >> f;
    c = (5 * (f - 32)) / 9;
    cout << c << " ";
    if (c <= 36)
    {
        cout << "0";
    }
    else
    {
        cout << "1";
    }

    return 0;
}
