#include <iostream>
using namespace std;
int main()
{
	int n = 0, max = 0;
	while (1)
	{
		cin >> n;

		if (n == 0)
		{
			cout << max << endl;
			break;
		}
		else if (n > max)
		{
			max = n;
		}
	}
	return 0;
}