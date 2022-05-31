#include<stdio.h>
int main()
{
    int a, b;
    printf("Enter the first number---> ");
    scanf("%d", &a);

    printf("Enetr the second number---> ");
    scanf("%d", &b);

    printf("The Quotient is---> %d\n", a/b);
    printf("The remainder is---> %d", a-((a/b)*b));

    return 0 ;

}