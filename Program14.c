// WAP to find the largest number amoung three using ternary operator.

#include<stdio.h>
void main()
{
  int a, b, c, large;
  printf("Enter the numbers: " );
  scanf("%d%d%d",&a,&b,&c);
  large= (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
  printf("Large value is %d", large);
}