#include<iostream>
using namespace std;

int main()
{
	int n = 0, x;
	int arr[100];

	while (cin >> x)
	{
		if (x == 0)
			break;
		arr[n] = x;
		n++;
	}

	int pos;
	cin >> pos;

	if (pos >= 0 && pos < n)
	{
		for (int i = pos; i < n - 1; i++)
		{
			arr[i] = arr[i + 1];
		}
		n--;
	}

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}

	return 0;
}