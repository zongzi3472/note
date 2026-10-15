#include <iostream>
using namespace std;
long long fac(int n)
{
	if (n == 0 || n == 1)
		return 1;
	return n * fac(n - 1);
}

int main()
{
	int n;
	cin >> n;
	double sum = 0;
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		sum += fac(x);
	}
		cout << sum / n << endl;
	return 0;
}