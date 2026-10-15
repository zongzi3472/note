#include <iostream>
#include <climits>
using namespace std;
int mm(int min, int max)
{
	if (min > max)
		return 0;
	int c = 0;
	for (int d = min;d <= max;d++)
		if (d % 2 != 0)
		{
			c += d;
		}
	return c;
}
int main()
{
	int n;
	cin>>n;
	int c = INT_MIN;
	for (int i = 0;i < n;i++)
	{
		int min=0, max=0;
		cin >> min>>max;
		int s = mm(min, max);
		if (c < s)
		 c = s;
	}
	cout << c << endl;
	return 0;
}