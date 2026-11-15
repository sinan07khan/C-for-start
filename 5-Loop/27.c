// C program to print a pattern of stars in reverse order

#include <stdio.h>

int main() 
{
    int n;
    scanf("%d", &n);

    for (int i = n; i >= 1; i--) 
    {
        for (int j = 1; j <= i; j++) 
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}