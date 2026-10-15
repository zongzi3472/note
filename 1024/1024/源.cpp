#include <iostream>
using namespace std;
int main()
{
	int n = 0;
	int i = 0;
	cin >> n;
	while (n > 0)
	{
		n -= n / 2 + 2;
		i++;
	}
	cout << i << endl;
	return 0;
}