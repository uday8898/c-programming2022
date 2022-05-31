#include <stdio.h>

int main()
{
    float p, r, t, S_I;

    printf("Enter the principal amount---> ");
    scanf("%f", &p);

    printf("Enter the rate amount---> ");
    scanf("%f", &r);
    
    printf("Enter the time inteval---> ");
    scanf("%f", &t);

    S_I = (p*r*t)/100;
    printf("The simple interest is---> %f", S_I);

    return 0;
}