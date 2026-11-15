// sum of array elements

#include <stdio.h>
int main ()
{
    int n;
    int sum = 0;
    printf("How many number u want ? ");

    scanf("%d",&n);

    int arr[n];

    printf("Enter %d number : \n",n);
    for (int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    
    {
    for(int i = 0 ; i < n ; i++)
        sum = sum + arr[i];
    }
        printf("Sum of the array elements is: %d\n", sum);

    return 0;
}
