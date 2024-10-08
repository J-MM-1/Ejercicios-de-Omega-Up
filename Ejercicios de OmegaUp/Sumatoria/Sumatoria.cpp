#include <iostream>
using namespace std;

int main()
{
    int i, s;
    int n;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        s += i;
    }
    cout << s;

    return 0;
}