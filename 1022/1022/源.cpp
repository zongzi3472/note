#include <iostream>
using namespace std;
int main()
{
	int num = 0;
	cin >> num;
	if (num == 2 || num == 3 || num == 5 || num == 7)
		cout << 1 << endl;
	else if (num % 2 == 0 || num % 3 == 0 || num % 5 == 0 || num % 7 == 0 || num == 1)
		cout << 0 << endl;
	else
		cout << 1 << endl;

	return 0;
}