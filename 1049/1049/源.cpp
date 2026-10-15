#include <iostream>
using namespace std;
int fib(int n)
{
	if (n == 0)
		return 0;
	else if (n == 1)
		return 1;
	else
		return fib(n - 1) + fib(n - 2);
}



int main()
{
	int mini, maxi;
	cin >> mini >> maxi;
	for (int i = 0;; i++)
	{
		int f = fib(i);
		if (f >= maxi)
			break;
		if (f > mini)
			cout << f << " ";
	}
	return 0;
}