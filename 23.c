// C program to print numbers from s to e with a step of id

#include <stdio.h>

int main() 
{
    int s, e, id, i;

    printf("Enter Start point: ");
    scanf("%d", &s);

    printf("Enter End point: ");
    scanf("%d", &e);

    printf("Enter Step (Inc(+)/Dec(-)): ");
    scanf("%d", &id);

    for (i = s; (id > 0) ? (i <= e) : (i >= e); i = i + id) 
    {
        printf("%d\t", i);
    }

    return 0;
}