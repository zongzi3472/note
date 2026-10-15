#include <iostream>
using namespace std;

int f(int a, int i)
{
	int c = 0;
	for (int j = 0; j < i; j++)
	{
		c = c * 10 + a;
	}
	return c;
}
int main()
{
	int a=0, n=0;
	cin >> a >> n;
	int c = 0;
	for (int i = 1;i <= n;i++)
	{
		c += f(a, i);
	}
	cout << c << endl;
	return 0;
}