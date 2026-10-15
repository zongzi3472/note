#include <iostream>
using namespace std;
int main()
{
	int num;
	cin >> num;
	int n = 0;
	while (1)
	{
		n += num % 10;
		num /= 10;
		if (num == 0)
			break;
	}
	cout << n << endl;
	return 0;
}