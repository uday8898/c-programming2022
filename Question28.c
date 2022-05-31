#include <stdio.h>
#include <math.h>

int main()
{
    float a, b;

    printf("Enter the side of the equilateral triangle--->");
    scanf("%f", &a);

    b = sqrt(3)/4*(a*a);

    printf("The area of the equilateral triangle is---> %f", b);

    return 0 ;
}