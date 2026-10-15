#include <iostream>
using namespace std;
int main()
{
	int n = 0;
	cin >> n;
	float a ,c = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> a;
		c += a;
	}
	cout << c / n << endl;
	return 0;
}