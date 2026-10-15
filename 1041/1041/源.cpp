#include <iostream>
using namespace std;
int main()
{
	int r = 0;
	cin >> r;
	int i=0;
	double x,y;//函数自变量
	for (;i < r;i++)
	{
		cin >> x >> y;
		double result = x;
		for (int j=1;j < y;++j)
		{
			result *= x;
		}
		cout << result << endl;

	}
	return 0;
}