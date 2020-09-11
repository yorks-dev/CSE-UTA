#include <stdio.h>
int main()
{
    double force = 685;
    double acceleration = 9;
    double mass = force / acceleration;
    printf("%lf\n", mass);
    return 0;
}