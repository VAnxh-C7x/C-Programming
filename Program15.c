// WAP to check whether the given number is Even or Odd using ternary operator.

#include<stdio.h>
int main(){
  int n;
  printf("Enter the number: " );
  scanf("%d",&n);
  (n%2==0)? printf("%d is even!!",n) : printf("%d is odd!!",n);
  return 0;
}