#include <stdio.h>

int main() 
{
    FILE *fp;
    
    fp = fopen("output.txt", "w");

    fprintf(fp, "Name: Sinan\n");
    fprintf(fp, "Roll: 101022\n");

    fclose(fp);

    printf("Data written to file successfully.\n");
    return 0;
}