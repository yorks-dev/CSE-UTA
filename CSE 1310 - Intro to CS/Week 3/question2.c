#include <stdio.h>

int main()
{
    int x = 4, y = 11;
    printf("%d", x);
    printf(" %d\n", y);
    y *= x;
    x /= x;
    printf("%d%d\n", y, x);
    return 0;
}