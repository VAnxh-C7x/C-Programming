// WAP to perform the sum of 1 to N. 
// Hint: sum= (N*(N+1))/2

#include<stdio.h>

int main()
{
    int n, sum;
    printf("Enter The Number: ");
    scanf("%d",&n);
    sum=(n*(n+1))/2;
    printf("Sum: %d",sum);
    return 0;
}