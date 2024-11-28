// WAP to find the area of trangle

#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("cls");
    float base, height;
    printf("Enter the base of triangle: ");
    scanf("%f", &base);    
    printf("Enter the height of triangle: ");
    scanf("%f", &height);
    printf("Area of triangle= %.1f",(0.5*base*height));
    return 0;
}