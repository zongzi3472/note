#include<iostream>
using namespace std;

void koi(int arr[], int len, int x)
{
	int i;
	for (i = len - 1; i >= 0 && arr[i] < x; i--)
	{
		arr[i + 1] = arr[i];
	}
	arr[i + 1] = x;
}

int main()
{
	int n, x;
	int arr[100] = { 0 };

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] > arr[i])
			{
				int t = arr[i];
				arr[i] = arr[j];
				arr[j] = t;
			}
		}
	}

	cin >> x;
	koi(arr, n, x);

	for (int i = 0; i < n + 1; i++)
	{
		cout << arr[i] << " ";
	}

	return 0;
}