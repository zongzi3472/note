#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int j,c,i;
	for (j = 1;j < n;j++)
	{
		c = 0;
		for (i = 1;i < j;i++)
		{
			if (j % i == 0)
				c += i;
		}
		if (c == j)
			cout << j << " ";
	}
	return 0;
}