// WAP to check given number is even or odd using ternary operator (not using if/else).

#include<stdio.h>
int main()
{
  int n;
  printf("Enter the number: " );
  scanf("%d",&n);
  (n%2==0)? printf("%d is even!!",n) : printf("%d is odd!!",n);
  return 0;
}