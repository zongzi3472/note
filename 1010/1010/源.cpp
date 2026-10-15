#include <iostream>
using namespace std;
int main()
{
	int x = 0;
	cin >> x;
	switch (x)
	{
	case 1:
		cout << "3.1" << endl;
		break;
	case 2:
		cout << "2.5" << endl;
		break;
	case 3:
		cout << "4.1" << endl;
		break;
	case 4:
		cout << "10.2" << endl;
		break;
	default:
		cout << "0" << endl;
		break;
	}
	return 0;
}