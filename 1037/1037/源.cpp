#include <iostream>
using namespace std;
int main()
{
	int n = 0;
	int num;
	int a, b;
	int o=0, j=0;
	cin >> n;
	for (int i = 0;i < n;i++)
	{
		cin >> num;
		if (num % 2 == 0)
		{
			a = num * num * num;
			o += a;
		}
		else
		{
			b = num * num;
			j += b;
		}
	}
	cout << j << " " << o << endl;
	return 0;
}