#include<stdio.h>

int main()
{
    float b, h, area ;

    printf("Enter the base of the triangle---> ");
    scanf("%f", &b);

    printf("Enter the height of the triangle---> ");
    scanf("%f", &h);

    area = (b*h)/2;
    printf("The area of the triangle---> %f", area);

    return 0;
}