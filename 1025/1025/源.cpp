#include <iostream>
using namespace std;
int main()
{
	int r, i;
	cin >> r;
	for (int i = 0; i < r; i++)
	{
		int num;
		cin >> num;
		if (num < 60)
			cout << "Fail" << endl;
		else
			cout << "Pass" << endl;
	}
	return 0;
}