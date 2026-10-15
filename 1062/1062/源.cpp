#include <iostream>
using namespace std;
int as(int x)
{
	if (x > 0)
		return 1;
	if (x < 0)
		return -1;
	else
     	return 0;
}

int main()
{
	int n;
	cin >> n;
	double c=0,d=0;
	for (int i = 0;i < n;i++)
	{
		double x;
		cin >> x;
		if (as(x)==1)
		{
			d++;
			c += x;
		}
	}
	cout << c / d << endl;
	return 0;
}