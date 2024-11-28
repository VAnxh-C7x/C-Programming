// WAP to convert miliseconds into hours, minutes and seconds.

#include<stdio.h>

int main()
{
    long long msec;
    int hrs, min, sec;
    printf("Enter time in Milliseconds: ");
    scanf("%lld", &msec);
    sec=msec/100;
    min=sec/60;
    hrs=min/60;
    sec=sec%60;
    min=min%60;
    printf("%02d:%02d:%02d\n",hrs,min,sec);
    return 0;
}