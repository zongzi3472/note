#include <stdio.h>
/*
数据的取值范围
limits.h表示整形的取值范围
float.h表示小数的取值范围
sizeof运算符返回值交给系统自己去计算
size_t是一个无符号整形，统一了sizeof运算符的返回值类型
也可以使用%zu来输出size_t类型的值
*/
int main()
{
	size_t num = 10000;//与后面赋值无关
	printf("Size of num: %zu\n", sizeof(num));
	return 0;

}