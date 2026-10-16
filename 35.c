// C program to count even and odd numbers in an array

#include <stdio.h>

int main() {
int n;
int even = 0;
int odd = 0;
 
printf("How many numbers? ");
scanf("%d", &n);

int arr[n];
printf("Enter %d numbers:\n", n);
for(int i = 0; i < n; i++) 
 
{
 scanf("%d", &arr[i]);
}

 for(int i = 0; i < n; i++) 
 
{
 if(arr[i] % 2 == 0) 
 {even++;}
 else 
 {odd++;}
}

 printf("Even numbers = %d\n", even);
 printf("Odd numbers = %d\n", odd);
 return 0;
}