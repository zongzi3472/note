#include <iostream>
using namespace std;

// 比较规则：奇数在前、偶数在后；同为奇数或偶数时小的在前
// 返回 true 表示 a 应排在 b 前面
bool shouldSwap(int a, int b) {
    bool aOdd = (a % 2 != 0);
    bool bOdd = (b % 2 != 0);
    if (aOdd != bOdd)
        return !aOdd;          // 奇数应在前
    return a > b;               // 同类按从小到大
}

// 冒泡排序（排序过程用函数实现）
void sortOddEven(int arr[], int n) {
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - 1 - i; j++)
            if (shouldSwap(arr[j], arr[j + 1])) {
                int t = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = t;
            }
}

int main() {
    int arr[100];
    int n = 0, x;
    cout << "请输入整数（以0结束）：" << endl;
    while (cin >> x && x != 0 && n < 100)
        arr[n++] = x;

    sortOddEven(arr, n);

    cout << "排序后的结果：" << endl;
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}
