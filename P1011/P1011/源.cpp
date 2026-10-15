#include <iostream>
using namespace std;

int main()
{
    long long a, n, m, x;
    cin >> a >> n >> m >> x;
    if (n <= 2)
    {
        cout << a;
        return 0;
    }
    if (x == n)
    {
        cout << m;
        return 0;
    }
    long long upA[25] = {}, upB[25] = {};
    upA[1] = 1;
    upB[2] = 1;
    for (int i = 3; i <= n - 1; i++)
    {
        upA[i] = upA[i - 1] + upA[i - 2];
        upB[i] = upB[i - 1] + upB[i - 2];
    }
    long long SA[25] = {}, SB[25] = {};
    SA[1] = 1;
    SA[2] = 1;
    SB[1] = 0;
    SB[2] = 0;
    for (int i = 3; i <= n - 1; i++)
    {
        SA[i] = SA[i - 1] + upA[i] - upA[i - 1];
        SB[i] = SB[i - 1] + upB[i] - upB[i - 1];
    }
    long long b = (m - a * SA[n - 1]) / SB[n - 1];
    cout << a * SA[x] + b * SB[x];
    return 0;
}
