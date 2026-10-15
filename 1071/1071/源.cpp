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
    int minIdx = 0;
    for (i = 1; a[i] != 0; i++)
        if (a[i] < a[minIdx]) minIdx = i;
    cout << minIdx << endl;
    return 0;
}