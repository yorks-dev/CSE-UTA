#include <stdio.h>
#define a 9.81
int main()
{
    float m;
    printf("Enter mass: ");
    scanf("%f",&m);
    printf("Force = %f\n", m*a);
    
    return 0;
}
