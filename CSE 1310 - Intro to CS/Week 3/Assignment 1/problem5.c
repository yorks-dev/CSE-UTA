#include <stdio.h>
#define a 9.81
int main()
{
    float m;
    printf("Enter mass: ");
    scanf("%f",&m);
    double force = m * a;
    printf("Force = %f\n", force);
    
    return 0;
}
