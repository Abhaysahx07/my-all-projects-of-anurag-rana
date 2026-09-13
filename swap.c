//WAP to demonstrate the swap of two numbers
#include <stdio.h>
int main()
{
    int a,b,temp=0;
    printf("enter the value of a:");
    scanf("%d",&a);
    printf("enter the value of b:");
    scanf("%d",&b);
    printf("Before swapping:\n");
        printf("a=%d b=%d\n",a,b);
        temp=a;
        a=b;
        b=temp;
        printf("After swapping:\n");
        printf("a=%d b=%d",a,b);
        return 0;
    }