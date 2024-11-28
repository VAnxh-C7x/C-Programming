// WAP to check wether the given number is single digit, two digit, three digit or more the 3 digits.

#include<stdio.h>
int main(){
    int a;
    printf("Enter the Number: ");
    scanf("%d", &a);
    if (a<10)
        printf("%d is Single Digit Number !!!",a);
    else if ((a>=10) && (a<100))
        printf("%d is Two Digit Number !!!", a);
    else if ((a>=100) && (a<1000))
        printf("%d is Three Digit Number !!!", a);
    else
        printf("%d is More than 3 digit Number !!!",a);
    return 0;
}

