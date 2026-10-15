#include <iostream>
using namespace std;

long long fib(int n)
{

    if (n == 0) return 0;
    if (n == 1) return 1;
    return fib(n - 1) + fib(n - 2);
}

int main()
{
    double e;
    cin >> e;
    double sum = 0, term;
    int n = 1;
    while (true)
    {
        term = 1.0 / fib(n);
        if (term < e) 
            break;
        sum += term;
        n++;
    }

    cout << sum << endl;
    return 0;
}
