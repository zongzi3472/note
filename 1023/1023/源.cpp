#include <iostream>
using namespace std;
int main()
{
	int n;
	float num = 0;
	cin >> n;
	for (int i = 1;i <= n;i++)
	{ 
		num += 1.00000/(3 * i - 2);
	}
	cout << num << endl;
	return 0;
}