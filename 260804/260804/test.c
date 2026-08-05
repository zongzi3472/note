#include <stdio.h>//头文件
//standard input output 标准输入输出

//main函数有且只有一个 int表示返回整数类型
int main() //函数头 函数类型 函数名
{ //函数体
	printf("hello C\n");
	printf("%d \n",100);
	printf("%c\n",'x');
	printf("%c\n",88);
	printf("%f\n",3.14);
	printf("hello\nworld\n");
	printf("%s\n","abcde");
	return 0;
	//在C语言中默认返回0表示正常返回,返回非0表示异常返回
}

//printf屏幕上打印信息 库函数
//%d打印整数 %c打印字符 %f打印小数 都是占位符
//关键字return返回 
//由单引号括起来的单个字符 'a' 'b' 'x'
//""括起来的表示字符串 后面会隐藏一个'\0'表示字符串结束