#include <iostream>
using namespace std;
int main()
{
	int y, m, d;
	cin >> y >> m >> d;
	int m1 = 31, m3 = 31, m5 = 31, m7 = 31, m8 = 31, m10 = 31, m12 = 31;
	int m4 = 30, m6 = 30, m9 = 30, m11 = 30;
	int m2 = 28;
	if (y%4==0&&y%100!=0||y%400==0)
		m2 = 29;

	switch (m)
	{
	case 1:
		cout <<d << endl;
		break;
	case 2:
		cout << m1 + d << endl;
		break;
	case 3:
		cout << m1 + m2 + d << endl;
		break;
	case 4:
		cout << m1 + m2 + m3 + d << endl;
		break;
	case 5:
		cout << m1 + m2 + m3 + m4 + d << endl;
		break;
	case 6:
		cout << m1 + m2 + m3 + m4 + m5 + d << endl;
		break;
	case 7:
		cout << m1 + m2 + m3 + m4 + m5 + m6 + d << endl;
		break;
	case 8:
		cout << m1 + m2 + m3 + m4 + m5 + m6 + m7 + d << endl;
		break;
	case 9:
		cout << m1 + m2 + m3 + m4 + m5 + m6 + m7 + m8 + d << endl;
		break;
	case 10:
		cout << m1 + m2 + m3 + m4 + m5 + m6 + m7 + m8 + m9 + d << endl;
		break;
	case 11:
		cout << m1 + m2 + m3 + m4 + m5 + m6 + m7 + m8 + m9 + m10 + d << endl;
		break;
	case 12:
		cout << m1 + m2 + m3 + m4 + m5 + m6 + m7 + m8 + m9 + m10 + m11 + d << endl;
		break;
	default:
		cout << "Invalid month" << endl;
		break;
	}
	return 0;
}