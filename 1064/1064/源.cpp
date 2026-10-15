#include <iostream>
using namespace std;
bool isodd(int num) {
    return num % 2 != 0;
}

int main() {
    int x;
    int count = 0;
    while (cin >> x && x != 0) {
        if (isodd(x)) {
            cout << x << endl;
            count++;
        }
    }
    cout << count << endl;
    return 0;
}