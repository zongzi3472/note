#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	while (n >= 10)
	{
		int a = 0;
		while (n > 0)
		{
			a += n % 10;
			n /= 10;
		}
		n = a;
	}
	cout << n << endl;
	return 0;
}