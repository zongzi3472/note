#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int a = 0;
	for (int i = 0;i < n;i++)
	{
		cin >> a;
		if (a <= 1000)
			cout << "0" << " ";
		else if (a > 1000 && a <= 3000)
			cout << a * 0.03<<" ";
		else if (a > 3000 && a <= 5000)
			cout << a * 0.04 << " ";
		else if (a > 5000)
			cout << a * 0.06 << " ";
	}
	return 0;
}