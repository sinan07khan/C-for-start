// This program calculates the grade based on the marks entered by the user.
#include <stdio.h>

int main() 
{
    int m;
    printf("Enter your marks: ");
    scanf("%d", &m);

    if (m >= 80) 
        printf("Grade: A+ \n Great job! You have passed the exam.");
    
    else if (m >= 75) 
        printf("Grade: A");
     
    else if (m >= 70) 
        printf("Grade: A-");
     
    else if (m >= 65) 
        printf("Grade: B+");

    else if (m >= 60)
        printf("Grade: B");

    else if (m >= 55) 
        printf("Grade: B-");
    
    else if (m >= 50) 
        printf("Grade: C+");
    
    else if (m >= 45) 
        printf("Grade: C");
    
    else if (m >= 40) 
        printf("Grade: D");

    else if (m < 40)
        printf("Grade: F\n You have failed the exam.");

return 0;
}