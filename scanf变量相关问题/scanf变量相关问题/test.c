#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
scaref相关
用于输入数据,
如果使用scanf_s其他编译器都无法编译,与scanf不相同
强行使用则#define _CRT_SECURE_NO_WARNINGS放于使用该函数的第一行
会自动跳过空格字符

scanf返回值
返回一个整数,返回读取变量的个数
无数据或者读取失败返回0
报错返回-1 EOF

%c不会跳过起手的空白字符,都会返回第一个字符
%s只会读取第一个单词,遇到空格就结束
*/

int main()
{
	int score = 0;
	printf("请输入成绩");
	scanf("%d",&score);//& 取出地址操作符
	printf("您输入的成绩是%d\n", score);
	int a = 0;
	int b = 0;
	float x = 0;
	float y = 0;
	printf("请输入四个数字");
	int r = scanf("%d %d %f %f", &a, &b, &x, &y);
	printf("您输入的四个值是: %d %d %f %f\n", a, b, x, y);
	printf("%d\n", r);//返回值,变量的个数
	printf("-----%c-----\n",a);//%c不会跳过空格字符,都会返回第一个字符
	return 0;
}
/*
如果想让每个.c文件都自动加上#define _CRT_SECURE_NO_WARNINGS
原文件的创建是拷贝了一个newc++file.cpp文件
在此文件上加上这句提示
*/