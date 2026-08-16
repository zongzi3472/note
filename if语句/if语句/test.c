#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
if语句
if(表达式) 表达式为真语句执行
0为假,非0为真
if想要控制多条语句时候需要外扩大括号
if可以进行嵌套

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

//int main()
//{
//	int age;
//	//输入
//	scanf("%d", &age);
//	if (age >= 18)
//	{
//		printf("成年");
//		printf("18+");
//	}
//	else
//	{
//		printf("未成年");
//		printf("未满18");
//	}
//	return 0;
//	}

//int main()
//{
//	int num = 0;
//	scanf("%d",&num);
//	if (num > 0)
//	{
//		if (num % 2 == 1)
//			printf("奇数");
//		else
//			printf("偶数");
//	}
//	else
//	{
//		printf("非正数");
//	}
//	return 0;
//}

int main()
{
	int age = 0;
	scanf("%d", &age);
	if (age < 18)
		printf("少年");
	else if (age <= 44)
		printf("青年");
	else if (age <= 59)
		printf("中年");
	else if (age <= 89)
		printf("老年");
	else
		printf("老寿星");
	return 0;
}
