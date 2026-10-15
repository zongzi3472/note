#include <iostream>
using namespace std;
int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	if (a + b == c)
		cout << "right" << endl;
	if (a + b != c)
		cout << "error" << endl;
	return 0;
}