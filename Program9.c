// WAP to convert number of days into years, months and days.

#include<stdio.h>

int main()
{
    int tdays, years, months, days;
    printf("Enter total number of days: ");
    scanf("%d",&tdays);
    years=tdays/365;
    months=(tdays % 365)/30;
    days=(tdays % 365) % 30;
    printf("%d years, %d months, %d days\n", years, months, days);
    return 0;
}