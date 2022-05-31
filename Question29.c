#include <stdio.h>

int main()
{
    float a, b, c, d, e, total_marks, average_marks, percentage_of_marks;

    printf("Enter the marks of first subject---> ");
    scanf("%f", &a);

    printf("Enter the marks of second subject---> ");
    scanf("%f", &b);

    printf("Enter the marks of third subject---> ");
    scanf("%f", &c);

    printf("Enter the marks of fourth subject---> ");
    scanf("%f", &d);

    printf("Enter hte marks of fifth subject---> ");
    scanf("%f", &e);

    total_marks = a+b+c+d+e;
    printf("The total marks of all subject---> %f\n", total_marks);

    average_marks = (a+b+c+d+e)/5;
    printf("The average marks of all subject---> %f\n", average_marks);

    percentage_of_marks = ((a+b+c+d+e)/500)*100;
    printf("The percentage of marks of all subjects is---> %f", percentage_of_marks);

    return 0;


}