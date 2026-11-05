// sring basic
#include <stdio.h>
#include <string.h>
int main() 

{
    char str1[20], str2[20];
    printf("Enter a string: \n");
    scanf("%s", str1);
    scanf("%s", str2);

    strlen(str1);
    printf("Length of str1: %d\n", (int)strlen(str1));

    strlen(str2);
    printf("Length of str2: %d\n", (int)strlen(str2));

    strcmp(str1, str2);
    printf("Comparison of str1 and str2: %d\n", strcmp(str1, str2));

    strstr(str1, str2);
    printf("%s\n", strstr(str1, str2));

    strrev(str2);
    printf("%s\n", str2);

    strcpy(str2, str1);
    printf("%s\n", str1);
    printf("%s\n", str2);

    strcat(str1, str2);
    printf("%s\n", str1);

    return 0;
}