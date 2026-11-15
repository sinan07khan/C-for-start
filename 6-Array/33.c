// C program to find the largest number in an array

#include <stdio.h>
int main ()
{
    int n;
     printf("How many numbers ? ");
    scanf("%d",&n);
    int num[n];
    printf("Enter %d numbers : \n",n);
    for(int i = 0 ; i < n ; i++)
    {
        scanf("%d",&num[i]);
    }

    int largest = num[0];
    for(int i = 1 ; i < n ; i++)
    {
        if(num[i] > largest)
        {
            largest = num[i];
        }
    }
    printf("The largest number is: %d\n", largest);
    return 0;
}