#include <iostream>
using namespace std;
int ds(int n) {
    if (n < 10)
        return n;
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return ds(sum);
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        cout << ds(x) << endl;
    }
    return 0;
}
