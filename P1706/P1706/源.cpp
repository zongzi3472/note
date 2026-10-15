#include <iostream>
bool arr[10] = { 0,0,0,0,0,0,0,0,0,0 };
int func(int n,int level)
{
	for (int i =1;i <= n;i++)
		if (arr[i] == false)
		cout << "     " << i;
		else
		{
			arr[i] = true;
			func(n, level + 1);
			arr[i] = false;
			if(level == 9)
				cout << endl;
			break;
		
	    {
			func(n, level + 1);
		}
		
	
}
	int main()
{
	int n;
	cin >> n;
	func(n, 1);
	return 0;
}

/*
(1)字典序
从小到大排序
(2)不重复不丢失
标记
*/