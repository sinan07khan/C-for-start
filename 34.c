// C program to find the smallest number in an array


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
    int smallest = num[0];
    for(int i = 1 ; i < n ; i++)
    {
        if(num[i] < smallest)
        {
            smallest = num[i];
        }
    }
    printf("The smallest number is: %d\n", smallest);
    return 0;
}