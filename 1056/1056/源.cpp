#include <iostream>
using namespace std;
int mm(int x)
{
	if (x == 1 || x == 0)
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
	int min, max;
	cin >> min >> max;
	int j=0;
	int sum=0;
	for (int i = min;i <= max;i++)
	{
		if (mm(i))
			sum+=i;
	}
	cout << sum << endl;
	return 0;
}