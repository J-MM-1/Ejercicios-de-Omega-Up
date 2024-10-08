#include <iostream>
using namespace std;

int main() 
{
    int me;
    float v;
    cin >> me;
    switch (me)
    {
    case 1 ... 500:
        v = me * 2;
        cout << "Plan #1 - $" << v;
        break;
    case 501 ... 1024:
        v = me * 1.8;
        cout << "Plan #2 - $" << v;
        break;
    case 1025 ... 2048:
        v = me * 1.6;
        cout << "Plan #3 - $" << v;
        break;
    case 2049 ... 4096:
        v = me * 1.4;
        cout << "Plan #4 - $" << v;
        break;
    case 4097 ... 10000:
        v = me * 0.5;
        cout << "Plan #5 - $" << v;
        break;

    }
    return 0;
}