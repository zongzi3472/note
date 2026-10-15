#include <iostream>
using namespace std;

int main()
{
    long long a0, b0, p;
    cin >> a0 >> b0 >> p;
    long long a = a0 % p;
    long long b = b0;
    long long ret = 1 % p;
    while (b > 0)
    {
        if (b & 1) ret = ret * a % p;
        a = a * a % p;
        b >>= 1;
    }
    cout << a0 << "^" << b0 << " mod " << p << "=" << ret << endl;
    return 0;
}