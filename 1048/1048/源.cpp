#include <iostream>
using namespace std;

int cv(int x)
{
	int z = 0;
	for (int i = 1;i <= x;i++)
	{
		if (x % i == 0)
			z++;
	}


	return z;
}

int main()
{
	int n;
	cin >> n;
	int c = 0;

	for (int i = 1;i <= n;i++)
	{
		int x;
		cin >> x;
		c += cv(x);
	}
	cout << c << endl;
	return 0;
}