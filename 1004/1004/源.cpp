#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int score = 0;
    scanf("%d", &score);
    if (score < 0 || score > 100)
        printf("illegal");
    else if (score >= 90)
        printf("A");
    else if (score >= 60)
        printf("B");
    else if (score < 60)
        printf("C");

    return 0;
}

