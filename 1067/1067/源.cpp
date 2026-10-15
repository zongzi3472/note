#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[100];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    bool first = true;
    for (int i = n - 1; i >= 0; i--)
    {
        if (a[i] % 3 == 0)
        {
            if (!first) cout << " ";
            cout << a[i];
            first = false;
        }
    }
    cout << endl;
    first = true;
    for (int i = n - 1; i >= 0; i--)
    {
        if (i % 3 == 0)
        {
            if (!first) cout << " ";
            cout << a[i];
            first = false;
        }
    }
    cout << endl;
    return 0;
}
