#include <iostream>
using namespace std;

int main()
{
    int n, i;
    cout << "Ingrese la cantidad de numeros: ";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i;
        }
        cout << endl;
    }

    return 0;
}