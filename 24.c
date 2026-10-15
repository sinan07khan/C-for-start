// C program to print odd numbers from s to e and calculate their sum

#include <stdio.h>

int main()
{
    int s, e, i, sum = 0;

    printf("Enter the start number s: ");
    scanf("%d", &s);

    printf("Enter the end number e: ");
    scanf("%d", &e);

    for(i = s; i <= e; i = i + 2)
    {
        sum = sum + i;
        printf("%d", i);

        if(i < e)
        {
            printf("+");
        }
    }

    printf("=%d\n", sum);

    return 0;
}