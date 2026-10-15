#include <iostream>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    bool neg = false;
    if (n < 0) 
    { 
        neg = true; 
        n = -n; 
    }
    long long rev = 0;
    while (n > 0) 
    {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    if (neg)
    {
        cout << -rev;
    }
    else
        cout << rev;
    return 0;
}