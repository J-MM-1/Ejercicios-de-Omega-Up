#include <iostream>
using namespace std;

int main()
{
    int n, i;
    cout << "Ingrese la cantidad de numeros: ";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            cout << i << " ";
        }
    }

    return 0;
}