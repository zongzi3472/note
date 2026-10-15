#include <iostream>
using namespace std;

int main()
{
    int a[100];
    int i = 0;
    cin >> a[i];
    while (a[i] != 0)
    {
        i++;
        cin >> a[i];
    }
    int n = a[i] == 0 ? i : 100;
    for (i = 0; i < n - 1; i++)
        for (int j = 0; j < n - 1 - i; j++)
            if (a[j] > a[j + 1])
            {
                int t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
    double m = n % 2 == 1 ? a[n / 2] : (a[n / 2 - 1] + a[n / 2]) / 2.0;
    cout << m << endl;
    return 0;
}