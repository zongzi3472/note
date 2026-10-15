#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    if (a < 0) a = -a;
    if (b < 0) b = -b;
    while (b != 0)
    {
        int t = a % b;
        a = b;
        b = t;
    }
    return a;
}

int main()
{
    int n;
    cin >> n;
    long long sum = 0;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        sum += gcd(a, b);
    }
    cout << sum << endl;
    return 0;
}
