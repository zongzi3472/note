#include <iostream>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int t = a % b;
        a = b;
        b = t;
    }
    return a;
}

int lcm(int a, int b) {
    return a / gcd(a, b) * b;
}

int main() {
    int n;
    cin >> n;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        sum += lcm(a, b);
    }
    cout << sum << endl;
    return 0;
}