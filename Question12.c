#include<stdio.h>
int main()
{
    float a, b, h, ar_tra;

    printf("Enetr the first side--> ");
    scanf("%f", &a);

    printf("Enetr the second side---> ");
    scanf("%f", &b);

    printf("Enetr the height---> ");
    scanf("%f", &h);

    ar_tra = ((a+b)/2)*h;

    printf("THe area of the trapezium is---> %f", ar_tra);

    return 0 ;


}