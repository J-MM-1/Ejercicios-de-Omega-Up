#include <iostream>
using namespace std;

int main() // Llamadas telefonicas
{
    int cl, t;
    float p;
    cin >> cl >> t;
    switch (cl)
    {
    case 12:p = t * 2;
        cout << p;
        break;
    case 15:p = t * 2.2;
        cout << p;
        break;
    case 18:p = t * 4.5;
        cout << p;
        break;
    case 19:p = t * 3.5;
        cout << p;
        break;
    case 23:p = t * 6;
        cout << p;
        break;
    case 25:p = t * 6;
        cout << p;
        break;
    case 29:p = t * 5;
        cout << p;
        break;
    }

    return 0;
}