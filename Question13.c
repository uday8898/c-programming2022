#include<stdio.h>
int main()
{
    float r, vol_sp;

    printf("Enter the radius of sphere---> ");
    scanf("%f", &r);

    vol_sp = (4.0/3)*(3.14)*(r*r*r);

    printf("The volume of sphere is---> %f", vol_sp);

    return 0 ;
}