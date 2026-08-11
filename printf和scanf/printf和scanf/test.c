#include <stdio.h>
/* f=format	格式化
printf和scanf介绍
printf:将参数文本格式化输出到标准输出设备（通常是屏幕）。
printf可以在输出文本中指定占位符,可以被其他的值代入
%hd : short int 
%ld : long int
%u : unsigned int
%hu : unsigned short int
%lu : unsigned long int
后缀o八进制 x十六进制
%Lf : long double浮点类型L大写
%p : 指针类型
%s : 字符串类型
%u : 无符号整数类型
%zu : size_t类型
%% 输出两个百分号
默认不显示正负号,如需显示可以在前面加上+号,如%+d
scanf:
*/

int main()
{
	printf("Hello World\n");//printf不会自动换行
	printf("hehe\n");//需要主动添加换行符\n
	//printf必须包含<stdio.h>头文件
	printf("There are %d apples\n", 10);//其中%d是占位符,10是代入值
	printf("%s will come tonight\n", "Zhangsan");//%s是字符串占位符
	printf("%s says its %d oclock\n", "Zhangsan", 10);//占位符一定要有数值进项匹配

	printf("%5d\n", 123);//限制输出宽度为5,不足的部分用空格补齐,默认右对齐
	printf("%-5d", 123);//限制输出宽度为5,不足的部分用空格补齐,左对齐
	printf("左对齐\n");
	printf("%5.2f\n", 3.141);//限制输出宽度为5,小数点后保留2位
	printf("%.2f\n", 3.141);//小数点后保留2位,不限制输出宽度
	printf("%*.*f\n", 5, 2, 3.1415);//限制输出宽度为5,小数点后保留2位
	//可以使用*代替变量数字
	printf("%+d\n", 123);//显示正负号
	printf("%+d\n", -123);//显示正负号
	printf("%.3s", "abcdef");//限制输出字符串长度为3,输出abc
	return 0;
}