// WAP to perform the swapping of two numbers without using third variable
#include<stdio.h>

int main()
{
    int num1, num2;
    printf("Enter Number 1: ");
    scanf("%d",&num1 );
    printf("Enter the Number 2: ");
    scanf("%d",&num2);
    printf("Origninal numbers: Num 1= %d, Num 2= %d\n", num1, num2 );
    num1=num1+num2;
    num2=num1-num2;
    num1=num1-num2; 
    printf("Swapped numbers: Num 1= %d, Num 2= %d\n", num1, num2);
    return 0;    
}
