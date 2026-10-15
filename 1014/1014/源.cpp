#include <iostream>
using namespace std;
int main()
{
	int num ;
	cin >> num;
	int a = num / 10000, b = (num / 1000) % 10, d = (num / 10) % 10, e = num % 10;
	if (a == e && b == d)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	return 0;
}