#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
if语句
if(表达式) 表达式为真语句执行
0为假,非0为真
if想要控制多条语句时候需要外扩大括号

*/
//int main()
//{
//	int num = 0;
//	//输入
//	scanf("%d", &num);
//	//判断
//	if (num % 2 == 1)
//		printf("判定为奇数\n");
//	else
//		printf("判定为偶数");
//	return 0;
//}

int main()
{
	int age;
	//输入
	scanf("%d", &age);
	if (age >= 18)
	{
		printf("成年");
		printf("18+");
	}
	else
	{
		printf("未成年");
		printf("未满18");
	}
	return 0;

}