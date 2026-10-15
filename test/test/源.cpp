#include <iostream>
using namespace std;

int main()
{
    double a;
    cin >> a;
    double b;
    double c;
    double d;
    double e;
    if (a <= 1000)
    {
        b = 0;
        cout << b << endl;
    }
    if (a > 1000 && a <= 3000)
    {
        c = a * 0.03;
        cout << c << endl;
    }
    if (a > 3000 && a <= 5000)
    {
        d = a * 0.04;
        cout << d << endl;
    }
    if (a > 5000)
    {
        e = a * 0.06;
        cout << e << endl;
    }

    return 0;
}
