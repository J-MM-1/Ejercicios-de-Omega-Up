#include <iostream> 
using namespace std;

int main()
{
    int p, q, r;
    cin >> p >> q;
    r = (p * p * p) + (q * q * q * q) - (2 * (p * p));
    if (r < 680)
    {
        cout << p << endl << q;
    }
    return 0;
}