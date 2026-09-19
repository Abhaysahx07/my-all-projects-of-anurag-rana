//WAP for incrementing a number by 1
#include<stdio.h>
int main()  
{
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    num++;
    
    printf("After incrementing, the number is: %d\n", num);
    
    return 0;
}