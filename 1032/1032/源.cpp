#include <iostream>
using namespace std;
int main()
{
	int num = 1001;
	for (;num > 1000 && num < 9999;num++)
	{
		int a = num / 100;
		int b = num % 100;
		if ((a + b) * (a + b) == num)
		{
			cout << num <<" ";
		}
	}
	return 0;
}