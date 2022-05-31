#include<stdio.h>
#include<math.h>
int main()
{
    float a, b, c, s, d;

    printf("Enter the first side--> ");
    scanf("%f", &a);

    printf("Enetr the second side---> ");
    scanf("%f", &b);

    printf("Enetr the third number--> ");
    scanf("%f", &c);

    s = (a+b+c)/2;
    d= sqrt(s*(s-a)*(s-b)*(s-c));

    printf("s = %f\n",s);
    printf("d = %f",d);

    return 0 ;

}