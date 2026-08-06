#include <stdio.h>
/*
每一种数据都有自己的长度
sizeof 用于计算数据类型的长度,单位是字节
sizeof 结果打印,需要使用%zu来打印
(里面放的是一个类型,求的是类型的长度)
存储二进制(0/1)时需要多少个字节,就需要多少个字节的空间
八个比特位是一个字节
sizeof还可以求表达式的长度,放入表达式不求值
sizeof(s = a + 1)写法不正确,最后取值取决于s的类型,而不是表达式的类型
sizeof不会去计算表达式的值,只会计算表达式的类型,所以不会改变变量的值

*/
int main()
{
	int num = 100;
	printf("num%zu\n", sizeof(int));
	printf("%zu\n", sizeof(_Bool));
	printf("%zu\n", sizeof(char));
	printf("%zu\n", sizeof(short));
	printf("%zu\n", sizeof(int));
	printf("%zu\n", sizeof(long));
	printf("%zu\n", sizeof(long long));
	printf("%zu\n", sizeof(float));
	printf("%zu\n", sizeof(double));
	return 0;
}