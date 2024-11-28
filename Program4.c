// WAP to perform the swapping of two numbers using third variable

int main()
{
    int num1, num2, temp;
    printf("Enter Number 1: ");
    scanf("%d", &num1);
    printf("Enter the Number 2: ");
    scanf("%d", &num2);
    printf("Origninal Numbers: Num 1= %d, Num 2= %d\n", num1, num2 );
    temp=num1;
    num1=num2;
    num2=temp;
    printf("Swapped Numbers: Num 1= %d, Num 2= %d\n", num1, num2);
    return 0;
}