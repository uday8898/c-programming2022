#include <stdio.h>
int main()
{
    float a;
    printf("Enter the length in cm--->");
    scanf("%f", &a);

    printf("Your given length in meters-->%f\n", a/100);
    printf("Your given length in kilometers-->%f", a/100000);

    return 0;

}