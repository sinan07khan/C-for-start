// string basic operations


#include <stdio.h>
#include <string.h>
int main() 
{

    char str1[20], str2[20];
    printf("Enter a string: \n");
    scanf("%s", str1);
    scanf("%s", str2);

// Calculate and print the length of str1 and str2
    strlen(str1);
    printf("Length of str1: %d\n", (int)strlen(str1));
    strlen(str2);
    printf("Length of str2: %d\n", (int)strlen(str2));


// Compare str1 and str2 and print the result
    strcmp(str1, str2);
    printf("Comparison of str1 and str2: %d\n", strcmp(str1, str2));


// Find the first occurrence of str2 in str1 and print the result
    strstr(str1, str2);
    printf("%s\n", strstr(str1, str2));


// Reverse str2 and print the result
    strrev(str2);
    printf("%s\n", str2);


// Copy str1 to str2 and print both strings
    strcpy(str2, str1);
    printf("%s\n", str1);
    printf("%s\n", str2);


// Concatenate str2 to str1 and print the result
    strcat(str1, str2);
    printf("%s\n", str1);

    
// Convert str to uppercase and print the result
    strupr(str1);
    printf("%s\n", str1);

    
// Convert str to lowercase and print the result
    strlwr(str1);
    printf("%s\n", str1);

    return 0;
}