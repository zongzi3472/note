#include <iostream>
using namespace std;
int p(int x)
{
	if (x < 2)
		return 0;
	for (int i = 2;i < x;i++)
	{
		if (x % i == 0)
			return 0;
	}
	return 1;
}

int main()
{
	int n;
	cin >> n;
	int c = 0;

	for (int i = 0;i < n;i++)
	{
		int num;
		cin >> num;
		if (p(num) == 1)
			c++;
		else
			continue;
	}
	cout << c << endl;
	return 0;
}