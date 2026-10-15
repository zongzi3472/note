#include <iostream>
using namespace std;
int main() {
    int n, a[100], b[100], i;
    cin >> n;
    for (i = 0; i < n; i++) cin >> a[i];
    for (i = 0; i < n; i++) b[i] = a[n - 1 - i];
    for (i = 0; i < n; i += 3) {
        if (i) cout << " ";
        cout << b[i];
    }
    cout << endl;
    return 0;
}
