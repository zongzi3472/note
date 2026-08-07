#include <stdio.h>
/*
强制类型转换 (类型)
万不得已时的操作,且能转时才能转
*/

int main()
{
	int a = (int)3.14;//强制转换为整数类型
	printf("a = %d\n", a);//输出结果为：a = 3

	return 0;
}