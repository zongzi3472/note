#include <stdio.h>
int main()
{
    double x = 0.0, y = 0.0, radius = 0.0;
    scanf("%lf %lf %lf", &x, &y, &radius);

    printf("Center: Point(%.1f, %.1f)\n", x, y);
    printf("Radius: %.1f\n", radius);
    printf("Area: %.4f\n", 3.14159 * radius * radius);
    printf("Perimeter: %.4f\n", 2 * 3.14159 * radius);

    return 0;
}
