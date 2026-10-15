#include <iostream>
using namespace std;
int main() {
    int a[100], n = 0, x, i;
    double sum = 0, avg;
    while (cin >> x && x != 0) a[n++] = x;
    for (i = 0; i < n; i++) sum += a[i];
    avg = sum / n;
    cout << avg << endl;
    return 0;
}
