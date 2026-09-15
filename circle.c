//WAP to find circumference of circle.
#include<stdio.h>
int  main()
{
    float r, c;
    printf("Enter the radius of the circle: ");
    scanf("%f", &r);
    c = 2 * 3.14 * r;
    printf("The circumference of the circle is: %.2f", c);
    return 0;
}