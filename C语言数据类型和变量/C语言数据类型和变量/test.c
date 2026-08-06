#include <stdio.h>
#include <stdbool.h>
/*
数据类型:描述解决生活中的事情
使用整形类型描述整数
整形类型 字符类型 浮点类型(小数点可以浮动)
char:字符类型

int:整形类型
shortint:短整形类型
longint:长整形类型
longlongint:长长整形类型

float:单精度浮点类型
double:双精度浮点类型(数字范围更大)
longdouble:长双精度浮点类型

布尔类型: _Bool (下划线大写)(C99标准引入)
头文件: #include <stdbool.h>
布尔值: true false 表示真假
C语言中用0表示假,非0表示真

*/

int main()
{
	_Bool flag = true;
	//可以在包含头文件的情况下使用bool类型,布尔类型
	if (flag)
		printf("I like C language\n");
	else
		printf("fk\n");
	return 0;
}
