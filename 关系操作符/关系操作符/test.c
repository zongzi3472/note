#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
关系操作符
两个等号是相等,一个等号是赋值
大小不等于号是分开写的
!=是不等号
操作符不可以连等,用&&分开表示
*/

int main()
{
	int age = 0;
	scanf("%d", &age);
	if (age >= 18 && age <= 36)
		printf("青年");
	return 0;
}

/*
条件操作符
exp1?exp2:exp3

b=(a>5?3:-3);
2为真赋值,3为假复制
*/
