// WAP check whether the given character is alphabet, digit or symbol.

#include<stdio.h>
void main()
{
    char chr;
    printf("Enter the Character: ");
    scanf(" %c",&chr);
    if((chr>=65 && chr<=90)||(chr>=97 && chr<=122))
    {
        printf("The Entered Character is Alphabet !!!");
    }
    else if ((chr>=48) && (chr<=57))
    {
        printf("The Entered Character is Digit !!!");
    }
    else
    {
        printf("The Entered Character is symbol !!!");
    }
}