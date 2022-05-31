#include <stdio.h>
int main()
{
    float r, dia, Area, Circum;
    printf("Enter the radius of the circle--> \n");
    scanf("%f", &r);

    dia = 2*r;
    printf("The diameter of the circle is -->%f\n", dia);
    
    Area = 3.14*r*r;
    printf("The area of the circle is -->%f\n", Area);

    Circum = 2*3.14*r;
    printf("The circumference of the circle -->%f", Circum);

    return 0 ;
}