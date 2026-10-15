#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    double coin = 0;
    scanf("%lg", &coin);

    if (coin <= 10)
        printf("%lg", coin / 10);
	if (coin > 10 && coin <= 20)
		printf("%lg", 1 + (coin - 10) * 0.075);
	if (coin > 20 && coin <= 40)
		printf("%lg", 1.75 + (coin - 20) * 0.05);
	if (coin > 40 && coin <= 60)
		printf("%lg", 2.75 + (coin - 40) * 0.03);
	if (coin > 60 && coin <= 100)
		printf("%lg", 3.35 + (coin - 60) * 0.015);
	if (coin > 100)
		printf("%lg", 3.95 + (coin - 100) * 0.01);

    return 0;
}