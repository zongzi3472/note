#include <iostream>
using namespace std;

int cv(int x)
{
	if (x < 2)
		return 0;
	for (int i = 2; i < x; i++)
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
	int num = 0;
	for (int i = 2; i <= n; i++)
	{
		if (cv(i)==1)
		{
			cout << i << " ";
			num++;
		}
	}
	cout << endl << num << endl;
	return 0;
}