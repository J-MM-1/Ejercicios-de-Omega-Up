#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int t, v;
    float numh, d, c;
    cin >> t >> v;
    numh = t / 60;
    d = v * numh;
    c = d / 12;
    cout << fixed << setprecision(2) << d << endl;
    cout << fixed << setprecision(2) << c;
    return 0;
}