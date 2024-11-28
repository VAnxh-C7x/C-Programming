// WAP to take input of 5 subject marks and display the grade according to table:
// A+ >=90 
// A >=80 and <90 
// B+ >=70 and <80
// B >=60 and <70 
// C >=50 and <60
// Fail <50 

#include<stdio.h>

int main()
{
    int num1, num2, num3, num4, num5, total;
    printf("Enter Marks of five subjects [out of 100]: ");
    scanf("%d%d%d%d%d",&num1, &num2, &num3, &num4, &num5);
    total=num1+num2+num3+num4+num5;
    if (total>=90)
    printf("A+");
    else if (total>=90 && total<90)
    printf("A");
    else if (total>=70 && total<80)
    printf("B+");
    else if (total>=60 && total<70)
    printf("B");
    else if (total>=50 && total<60)
    printf("C");
    else if (total<50)
    printf("Fail");
    return 0;
}