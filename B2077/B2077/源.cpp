#include <iostream>
using namespace std;
int main()
{
	long long num;
	cin >> num;
	while (num != 1)
	{
		if (num % 2 == 1)
		{
			cout << num << "*3+1=" << num * 3 + 1 << endl;
			num = num * 3 + 1;
		}
		else
		{
			cout << num << "/2=" << num / 2 << endl;
			num = num / 2;
		}
	}
	cout << "End" << endl;
	return 0;
}