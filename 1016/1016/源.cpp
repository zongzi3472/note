#include <iostream>
using namespace std;
int main()
{
	int h, n;
	cin >> h >> n;
	int cn = (h - 110);
	if (cn - n > 5)
	    cout << "thin" << endl;
	else if (n - cn > 5)
		cout << "fat" << endl;
	else 
		cout << "standard" << endl;
	return 0;
}