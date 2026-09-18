//WAP to find the Largest number or smallest number among three numbers.
#include<stdio.h>
int main()
{
    int num1, num2, num3;
    
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    
    // Finding the largest number
    if (num1 >= num2 && num1 >= num3)
        printf("The largest number is: %d\n", num1);
    else if (num2 >= num1 && num2 >= num3)
        printf("The largest number is: %d\n", num2);
    else
        printf("The largest number is: %d\n", num3);
    
    // Finding the smallest number
    if (num1 <= num2 && num1 <= num3)
        printf("The smallest number is: %d\n", num1);
    else if (num2 <= num1 && num2 <= num3)
        printf("The smallest number is: %d\n", num2);
    else
        printf("The smallest number is: %d\n", num3);
    
    return 0;
}code 