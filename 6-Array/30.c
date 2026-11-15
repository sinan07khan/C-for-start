// print array elements

#include <stdio.h>
int main ()
{
    int n;
    printf("How many numbers? ");
    
 scanf("%d", &n);

 int arr[n];
 printf("Enter %d numbers:\n", n);
 for(int i = 0; i < n; i++) 
 
 {
 scanf("%d", &arr[i]);
 }

 printf("Array elements are:\n");
 for(int i = 0; i < n; i++) 
 
 {
 printf("%d ", arr[i]);
 }

    return 0;
}   