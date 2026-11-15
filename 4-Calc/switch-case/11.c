// C program to check whether a character is vowel or consonant
#include <stdio.h>

int  main()
{
char ch;
printf("Enter any Alphabet: ");
scanf("%c",&ch);
switch(ch)
{
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        printf("It is a vowel.");
        break;
    default:
        printf("Consonant.");
        break;
}
return 0;
}