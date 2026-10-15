#include <iostream>
using namespace std;
int main()
{
	float n = 0;
	float num = 0;
	cin >> n;
	for (int i=1;i<=n;i++)
	{
		 num += 1.00000 / i;
	}
	cout << num << endl;
	return 0;
}