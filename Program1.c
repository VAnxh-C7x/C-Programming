// WAP to find addition, subtraction, multiplication and remaindar of two number
#include<stdio.h>
int main()
{
    int n1,n2;
    printf("Enter the Number 1: ");
    scanf("%d",&n1);
    printf("Enter the Number 2: ");
    scanf("%d",&n2);
    printf("Addition: %d\n",n1+n2);
    printf("Subtraction: %d\n",n1-n2);
    printf("Multiplication: %d\n",n1*n2);
    printf("Remainder: %d",n1%n2);
}