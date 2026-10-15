#include <iostream>
using namespace std;

int main()
{
    int a[100];
    int i = 0;
    cin >> a[i];
    while (a[i] != 0 && i < 99)
    {
        i++;
        cin >> a[i];
    }
    int n;
    if (i == 99 && a[i] != 0) n = 100;
    else n = i;
    for (i = 0; i < n - 1; i++)
        for (int j = 0; j < n - 1 - i; j++)
            if (a[j] > a[j + 1])
            {
                int t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
    for (i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
    return 0;
}