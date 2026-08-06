#include <stdio.h>
/*
C语言中使用signed和unsigned关键字修饰字符型和整形
signed表示整形带有正负号
unsigned表示整形只带正号只能表示正整数和零
int类型默认是signed类型
signed int num 可以表示正负整数
unsigned int num 只能表示正整数和零
signed可以省略不写
char可能是signed也可能是unsigned，取决于编译器的实现
大部分是signed char
unsigned取值范围会翻倍65535
limits.h中可以查到以上数据

字符类型存储时存储ASCII值,属于整数,所以字符类型属于整形家族
*/