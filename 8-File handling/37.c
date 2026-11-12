#include <stdio.h>
int main() 
{
    int i,a;
    FILE *s;
    s = fopen("text.txt", "w");
    for (i = 0; i < 5; i++) 
    {
        a = i + 1;
        fprintf(s, "%d ", a);
    }
    fprintf(s, "\n");
    fclose(s);
    return 0;
}