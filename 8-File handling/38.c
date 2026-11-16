#include <stdio.h>

int main() 
{
    FILE *fp;
    
    fp = fopen("output.txt", "w");

    fprintf(fp, "Name: Sinan\n");
    fprintf(fp, "Roll: 101022\n");
    fprintf(fp," CGPA: 3.75\n");
    fprintf(fp, "Department: Computer Science\n");

    fclose(fp);

    printf("Data written to file successfully.\n");
    return 0;
}