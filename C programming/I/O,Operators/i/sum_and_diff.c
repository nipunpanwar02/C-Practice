// Sum and diff. of Two numbers.


#include <stdio.h>

int main()
{
    int x, y;
    float a, b;

    // Read integer inputs
    scanf("%d %d", &x,  &y);

    // Read float inputs
    scanf("%f %f", &a, &b);

    // Integer sum and difference
    printf("%d %d\n", x + y, x - y);

    // Float sum and difference
    printf("%.1f %.1f\n", a + b, a - b);

    return 0;
}