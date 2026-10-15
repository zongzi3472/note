#include <iostream>
#include <climits>
using namespace std;
int main()
{
	int a, n = 0;
	int i = 0;
	for (;;i++)
	{
		cin >> a;
		if (a == 0)
			break;
		else if (a > n)
			n = a;
	}
	cout << i << " " << n << endl;
	return 0;
}