#include <iostream>
using namespace std; 
int main()
{
	int num = 0;
	int a = 0;
	cin >> num;
	for (int i = 1; i <= num; i++)
	{
		if(num%i==0)
		{
			a++;
		}
	}
	cout << a << endl;
	return 0;
}