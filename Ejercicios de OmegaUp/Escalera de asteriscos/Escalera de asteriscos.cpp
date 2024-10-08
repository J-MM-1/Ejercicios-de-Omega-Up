#include <iostream>
using namespace std;

int main()
{
    int n, i = 1;
    cout << "Ingrese la cantidad de numeros: ";
    cin >> n;
    for (i; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}