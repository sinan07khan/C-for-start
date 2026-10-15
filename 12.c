// C program to perform basic arithmetic operations
#include <stdio.h>

int main()

{
    int a,b;
    char o;
    printf("Enter Two numbers: ");
    scanf("%d %d",&a,&b);
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c",&o);

    switch(o)
    {
        case '+':
            printf("result = %d",a+b);
            break;

        case '-':
            printf("result = %d",a-b);
            break;

        case '*':
            printf("result = %d",a*b);
            break;

        case '/':
            printf("result = %d",a/b);
            break;

        default:
            printf("Error! Invalid operator.");
    }
    return 0;
}