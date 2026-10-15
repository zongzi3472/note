#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int time = 0;
    scanf("%d", &time);
    if (time <= 4)
        printf("50");
    if (time > 4 && time <= 8)
        printf("%d", 50 + (time - 4) * 20);
    if (time > 8)
        printf("%d", 130 + (time - 8) * 30);
    return 0;
}