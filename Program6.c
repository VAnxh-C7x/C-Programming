// WAP to find total marks and percentage of five subjects marks.

#include<stdio.h>

int main()
{
    int num1, num2, num3, num4, num5, total;
    printf("Enter Marks of five subjects [out of 100]: ");
    scanf("%d%d%d%d%d",&num1, &num2, &num3, &num4, &num5);
    total=num1+num2+num3+num4+num5;
    printf("Total Marks: [%d/500]\n",total);
    printf("Percentage: %d",total/5);    
}