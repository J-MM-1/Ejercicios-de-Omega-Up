#include <iostream>
using namespace std; 

int main()
{
    int n, s, c;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> c;
        s += c;
    }
    s /= n;
    cout << "Prom: " << s;
    return 0;
}