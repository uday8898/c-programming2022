#include <stdio.h>
int main()
{
    float x;
    printf("Enter the temperature in degree celsius--> ");
    scanf("%f", &x);

    printf("your given temperature in fahreneitis---> %f", 1.8*x+32);

    return 0;

}