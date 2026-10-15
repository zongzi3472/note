#include <iostream>
using namespace std;
int main() {
    int a[100], n = 0, x, i;
    int maxi;
    while (cin >> x && x != 0) a[n++] = x;
    maxi = a[0];
    for (i = 1; i < n; i++)
        if (a[i] > maxi) maxi = a[i];
    cout << maxi << endl;
    return 0;
}
