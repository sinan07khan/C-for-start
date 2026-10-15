//arry programs

#include <stdio.h>
int main()
{
    int n;
    int sum = 0;
    int odd_count = 0;
    int even_count = 0;
    printf("How many numbers do you want to enter? \n");
    scanf("%d", &n);

    printf("Enter %d numbers \n", n);
    int arr[n];
    for (int i = 0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\nYou entered: ");
    for (int i = 0; i<n; i++)
    {
        printf("%d ", arr[i]);
        printf(" + ");
    }

    printf("\nThe sum of the numbers is: ");
    for (int i = 0; i<n; i++)
    {
        sum = sum + arr[i];
    }
    printf("%d", sum);

    printf("\nThe average of the numbers is: ");
    float average = (float)sum / n;
    printf("%.2f", average);

    printf("\nThe maximum number is: ");
    int max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    printf("%d", max);

    printf("\nThe minimum number is: ");
    int min = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    printf("%d", min);

    printf("\nThe odd numbers are: ");
    for (int i = 0; i<n; i++)
    {
        if (arr[i] % 2 != 0)
        {
            printf("%d ", arr[i]);
            odd_count++;
        }
    }
    printf("\nThe count of odd numbers is: %d", odd_count);

    printf("\nThe even numbers are: ");
    for (int i = 0; i<n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            printf("%d ", arr[i]);
            even_count++;
        }
    }
    printf("\nThe count of even numbers is: %d", even_count);

    return 0;
}