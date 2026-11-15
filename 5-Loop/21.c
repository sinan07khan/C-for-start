// C program to print odd numbers from 121 to n using for loop

#include <stdio.h>

int main() 
{
    int n,i;
    printf("Enter the end point: ");
    scanf("%d", &n);

    for (i = 121; i <= n; i = i + 2) 
    {
        printf("%d\t", i);
    }

    return 0;
}