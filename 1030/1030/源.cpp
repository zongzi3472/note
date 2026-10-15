#include <iostream>
using namespace std;
int main()
{
	int a = 0;
	int c = 0;
	while (cin >> a && a != 0)
	{
		if (a % 2 != 0)
		{
			c += a;
		}
	}
	cout << c << endl;
	return 0;
}
