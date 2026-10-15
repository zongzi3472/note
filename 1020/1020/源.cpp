#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a, b, c;
    cin >> a >> b >> c;

    double delta = b * b - 4 * a * c;

    if (delta > 0)
    {
        double x1 = (-b - sqrt(delta)) / (2 * a);
        double x2 = (-b + sqrt(delta)) / (2 * a);
        if (x1 > x2)
        {
            double t = x1;
            x1 = x2;
            x2 = t;
        }
        cout << x1 << " " << x2 << endl;
    }
    else if (delta == 0)
    {
        cout << -b / (2 * a) << endl;
    }
    else
    {
        cout << "none" << endl;
    }

    return 0;
}
