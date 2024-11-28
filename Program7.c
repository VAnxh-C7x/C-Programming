// WAP to convert the temp. given in fahrenheit to celsius. C (F-32) 5/9

#include<stdio.h>

int main()
{   
    float fah,cel;
    printf("Enter the temperature (in Fahrenheit): ");
    scanf("%f", &fah);
    cel=(fah-32)*5/9;
    printf("The converted temperature (in celcius)= %.1f ",cel);
    return 0;
}