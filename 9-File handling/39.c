#include <stdio.h>

int main() 
{
    FILE *fp;
    char buffer[100];

    
    fp = fopen("output.txt", "r");

    if (fp == NULL) {
        printf("ফাইল খুঁজে পাওয়া যায়নি!\n");
        exit(1);
    }
   
    while (fgets(buffer, sizeof(buffer), fp) != NULL) {
        printf("%s", buffer);
    }

    fclose(fp);

    return 0;
}