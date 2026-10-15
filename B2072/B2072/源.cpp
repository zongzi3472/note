#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int i = 1;
	int a=0;
	for (;i <= n;i++)
	{
		a += i;
	}
	cout << a << endl;
	return 0;
}