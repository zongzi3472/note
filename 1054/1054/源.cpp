#include <iostream>
using namespace std;
double m2(double x, double n)
{
	double c = 1;
	for (int i = 0;i < n;i++)
	{
		c *= x;
	}
	return c;
}
int main()
{
	double x, n;
	cin >> x >> n;
	cout << m2(x, n) << endl;
	return 0;
}