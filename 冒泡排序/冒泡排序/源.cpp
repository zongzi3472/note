#include <iostream>
using namespace std;
/*
排序总轮数=元素个数-1;
每轮对比数=元素个数-轮数-1;
*/
int main()
{
	int arr[] = { 4,2,8,0,5,7,1,3,9 };
	for (int i = 0;i < 9;i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	for (int i = 0;i < 9;i++)
	{
		for (int j = 0;j < 9 - i - 1;j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j+1] = temp;
			}
		}
	}
	for (int i = 0;i < 9;i++)
	{
		cout << arr[i] << " ";
	}
	return 0;
}