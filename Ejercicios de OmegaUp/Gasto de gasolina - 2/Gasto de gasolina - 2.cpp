#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double t, v;
    double numh, d, c;
    cin >> t >> v;
    numh = t / 60;
    d = v * numh;
    c = d / 12;
    cout << fixed << setprecision(2) << d << " Km" << endl;
    cout << fixed << setprecision(2) << c << " Litros";
    return 0;
}