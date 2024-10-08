#include <iostream>
using namespace std; 

int main()
{
    int m, n;
    cin >> m;
    if (m % 12 == 0)
    {
        n = m / 12;
        cout << n << " DOCENAS DE MANZANAS.";
    }
    else
    {
        cout << "EL NUMERO NO ES MULTIPLO DE 12.,";
    }


    return 0;
}