// WAP to find the greatest number amoung two. (using if / else )

#include<stdio.h> 
int main(){
    int a,b;
    printf("Enter two Numbers [A & B]: "); 
    scanf("%d%d", &a,&b);
    if (a>b)
        printf("A is greater !!!");
    else
        printf("B is greater !!!");
    return 0;
}
