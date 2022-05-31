#include<stdio.h>

int main()
{
    int a, b, c;

    printf("Enter the first angle---> ");
    scanf("%d", &a);

    printf("Enter the second angle---> ");
    scanf("%d", &b);

    c = 180-(a+b);

    printf("The third angle of the triangle is---> %d", c);

    return 0 ;
}