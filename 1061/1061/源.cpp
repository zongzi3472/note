#include <iostream>
using namespace std;
int  np(int x)
{
	int c = 0;
	for(int i=1;i<=x;i++)
	{ 
		c += i;
	}
	return c;
}


int main()
{
	int m, n;
	cin >> m >> n;
	int c = np(m) + np(n);
	cout << c << endl;
	return 0;
}