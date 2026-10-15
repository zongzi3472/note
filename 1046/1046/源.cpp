#include <iostream>
using namespace std;
int main()
{
	int n = 1,i;
	int maxi=0;
	while (n != 0)
	{
		cin >> n;
		for (i = 2;i < n;i++)
		{
			if (n % i == 0)
				break;
			else if (n > maxi)
				maxi = n;
			else
				break;
		}
	}
	if (maxi == 0)
		cout << "no" << endl;
	else
		cout << maxi << endl;
	return 0;
}