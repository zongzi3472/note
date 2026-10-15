#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int num = 0;
    scanf("%d", &num);
    int a = num % 17;
    if (a == 0)
        printf("1");
    else
        printf("0");
    return 0;

}
