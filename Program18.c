// WAP to check whether the given character is vowel or consonant.


#include<stdlib.h>
int main(){
    system("cls");
    char c;
    printf("Enter the Alphabet: ");
    scanf("%c", &c);
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || 
        c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') 
    printf("%c is a vowel.\n", c);  
    else 
    printf("%c is a consonant.\n", c);  
    return 0;
} 
