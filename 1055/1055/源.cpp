#include <iostream>
using namespace std;

int nk(int n, int k)
{
    int c = 1;
    for (int i = 0; i < k; i++)
        c *= n;
    return c;
}
int main()
{
    int n, k;
    cin >> n >> k;
    int sum = 0;
    for (int i = 1; i <= n; i++)
        sum += nk(i, k);
    cout << sum;
    return 0;
}
