// C program to calculate the average of marks of n students

#include <stdio.h>
int main()
{
    int n ;
    float avg;
    printf("How many Students? ");
    scanf("%d",&n);

    int marks[n];
     printf("Enter %d marks : \n",n);
    for(int i = 0 ; i < n ; i++)
    {
        scanf("%d",&marks[i]);
    }
    int sum = 0;
    for(int i = 0 ; i < n ; i++)
    {
        sum = sum + marks[i];
    }
    avg = (float)sum / n;
    printf("Average of the marks is: %.2f\n", avg);
    return 0;
}