#include <iostream>
using namespace std;
int main()
{
	int num;
	cin >> num;
	int i = 1;
	int a = 0;
	int z;
	for (;;i++)
	{
		z = num % 10;

		if (num == 0)
        {
			break;
		}
		else if (z % 2 == 0)
		{
			a += z;
		}
		num /= 10;
	}
	cout << a << endl;
	return 0;
}