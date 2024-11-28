// WACP to find the area and perimeter of circle, Square and rectangle

#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("cls");
    float rad, len, bre, side; 
    float const pi=3.141;
    printf("Enter the radius of circle: ");
    scanf("%f", &rad);    
    printf("Enter the length & breadth of Rectangle: ");
    scanf("%f %f", &len, &bre);
    printf("Enter the side of Square: ");
    scanf("%f",&side);
    printf("Circle:\n Area= %.2f & Circumference= %.2f\n",pi*rad*rad, 2*pi*rad);
    printf("Rectangle:\n Area= %.1f & Perimeter= %.1f\n", len*bre, 2*(len+bre));
    printf("Square:\n Area= %.1f & Perimeter= %.1f\n", side*side, 4*side );
    return 0;
}