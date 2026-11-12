#include <stdio.h>

int main()
{
    int i,a[10];
    FILE *s,*l;

    s = fopen("text.txt", "r");
    l = fopen("tt.txt", "w");
    

    for (i = 0; i < 5; i++) 
        fscanf(s,"%d", &a[i]);
    for (i = 0; i < 5; i++) 
        fprintf(l, "     %d", a[i]);

    fprintf(l, "%s", " \n");
    fclose(s);
    fclose(l);
    return 0;
}