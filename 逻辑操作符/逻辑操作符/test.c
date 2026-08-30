#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int flag = 0;
	scanf("%d", &flag);
	if (flag)
	{
		printf("flag为真");
	}
	if (!flag)
		printf("flag为假");
	return 0;
}
/*
!代表转换原值

逻辑与运算符
&&并且 两者都要满足
两者都很重要  非0代表真
有假则为假,全真才为真
||有一个为真即可


*/
