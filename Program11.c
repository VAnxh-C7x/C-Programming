// WAP to read a 5 digit number from the user and perform the sum of there digits

#include<stdio.h>

int main()
{
  int n, sum=0;
  printf("Enter 5 digit number: ");
  scanf("%d", &n);
  sum+= n%10;
  n/=10;
  sum+= n%10;
  n/=10;
  sum+= n%10;
  n/=10;
  sum+= n%10;
  n/=10;
  sum+= n%10;
  n/=10;
  printf("sum: %d\n", sum);
  return 0;
}