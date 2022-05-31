#include<stdio.h>
int main()
{
    int a, b, c;

    scanf("%d",&a);
    scanf("%d",&b);
    c = b;
    b = a;
    a = c;

   printf("%d\n%d", a,b);

    return 0 ;
}