#include<iostream>
using namespace std;
int j = 0;
void dx(int arr[], int k,int n)
{
	for (int i = j;i>k ; i--)
	{
		arr[i] = arr[i - 1];
	}
	arr[k] = n;
}
int main()
{
	int num[101] = { 0 };

	for (int i = 0;i < 100;i++)
	{
		int x;
		cin >> x;
		if (x == 0)
			break;
		else
		{
			num[i] = x;
			j++;
		}
	}
	int k, n;
	cin >> k >> n;
	dx(num, k, n);
	for (int i = 0;i < j + 1;i++)
	{
		cout << num[i] << " ";
	}
	return 0;
}