#include <string.h>
#include <stdio.h>
int main()
{
	//strlen("abc");//string length求字符串长度 统计的是/之前的,不包含斜杠
	//int len = strlen("abc");
	int len = strlen("C:\test\\16\test.c");
	//转义字符算一个字符,所以字符串长度为15
	printf("%d\n", len);
	return 0;
}