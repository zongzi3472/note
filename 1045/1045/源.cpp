#include <iostream>
using namespace std;
int main()
{
	float a, c = 0;
	int i=0;
	while(1)
	{
		cin >> a;
		if (a == 0)
			break;
		else
		c += a;
		i++;
	}
	cout << c / i << endl;
	return 0;
}