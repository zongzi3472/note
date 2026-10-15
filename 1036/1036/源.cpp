#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;

	int a = 0, b = 1, f = 0;
	for (int i = 2; i <= n; i++)
	{
		f = (a + b) % 3;
		a = b;
		b = f;
	}

	if (f % 3 == 0)
		cout << "yes" << endl;
	else
		cout << "no" << endl;

	return 0;
}