#include <stdio.h>
#define a 9.81
int main()
{
    double m;
    printf("Enter mass: ");
    scanf("%lf",&m);
    printf("Force = %lf\n", m*a);
    
    return 0;
}
