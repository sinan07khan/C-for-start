// C program to print even numbers from 2 to 500 using for loop

#include <stdio.h>

int main() 
{
    int i;
    for (i = 2; i <= 500; i = i + 2) 
    {
        printf("%d\t", i);
    }
    
    return 0;
}