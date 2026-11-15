// C program to print multiplication table of a number othoba namota

#include <stdio.h>
int main()
{

int i,n,r;

printf("Enter number: ");
scanf("%d",&n);

printf("Enter the range: ");
scanf("%d",&r);

for (i = 1; i <= r; i++)

printf("%d * %d = %d\n",n,i,n*i);

return 0;
}