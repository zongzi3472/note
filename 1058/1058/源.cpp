#include <iostream>
using namespace std;

int reverse(int n) 
{
    int sign = 1;
    if (n < 0) 
    {
        sign = -1;
        n = -n;
    }
    int r = 0;
    while (n != 0) 
    {
        r = r * 10 + n % 10;
        n /= 10;
    }
    return sign * r;
}

int main() 
{
    int n;
    int sum = 0;
    while (cin >> n && n != 0) 
    {
        sum += reverse(n);
    }
    cout << sum << endl;
    return 0;
}