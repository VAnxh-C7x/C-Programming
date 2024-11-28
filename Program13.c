// WAP to find the largest number amoung two using ternary operator

#include<stdio.h>
void main()
{
  int n, s, large;
  printf("Enter the number 1: " );
  scanf("%d",&n);
  printf("Enter the number 2: " );
  scanf("%d",&s);
  large= (n>s)? n:s;
  printf("Large value is %d", large);
}