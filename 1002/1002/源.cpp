#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    double coin = 0;
    scanf("%lg", &coin);
    double tax = 0;
    if (coin <= 1000)
        printf("0");
    else if (coin <= 3000)
        printf("%lg", coin * 0.03);
    else if (coin <= 5000)
        printf("%lg", coin * 0.04);
    else if (coin > 5000)
        printf("%lg", coin * 0.06);

    return 0;

}
