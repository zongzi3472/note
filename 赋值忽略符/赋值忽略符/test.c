#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
赋值忽略符
scanf函数需要按照对应的格式输入
否则只能读到第一个数字
*放于%之后字母之前,将该值忽略

*/
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d,%d",&a,&b);
//	printf("a= %d b= %d", a, b);
//	return 0;
//
//}

int main()
{
	int year = 0;
	int month = 0;
	int day = 0;

	scanf("%d%*c%d%*c%d", &year, &month, &day);

	printf("%d %d %d\n", year, month, day);

	return 0;
}