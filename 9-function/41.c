#include <stdio.h>
long long fact (int n);
int main()
{
    int n;
    long long factorial;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    factorial = fact(n);
    printf("Factorial of %d is %lld\n", n, factorial);
    return 0;
}
long long fact (int n) 
{
    if (n == 0)
        return 1;
     else 
        return n * fact(n - 1);
}