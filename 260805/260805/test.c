#include <stdio.h>
// \n \0 转义字符
int main()
{
	printf("abc\ndef");
	printf("%c\n", '\'');//表示字符串内部的引号
	printf("C:\\test\\a.txt\n");//表示斜杠用双斜杠
	//printf("\a");//发出警告声
	printf("abcdf\b\n");//退格
	printf("abcxx\rdef\n");//回车
	printf("a\tabc\tabcd\tabcde\n");//水平制表符
	
	return 0;
}