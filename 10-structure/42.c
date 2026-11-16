#include <stdio.h>
struct student 
{
    char name[50];
    int roll;
    float marks;
};
int main()
{
    struct student a;
    printf("Enter name: ");
    scanf("%s", a.name);
    printf("Enter roll number: ");
    scanf("%d", &a.roll);
    printf("Enter marks: ");
    scanf("%f", &a.marks);

    struct student b;
    printf("Enter name: ");
    scanf("%s", b.name);
    printf("Enter roll number: ");
    scanf("%d", &b.roll);
    printf("Enter marks: ");
    scanf("%f", &b.marks);

    printf("\nStudent Details:\n");
    printf("\nName: %s\n Roll = %d\n Marks = %.2f\n", a.name, a.roll, a.marks);
    printf("\nName: %s\n Roll = %d\n Marks = %.2f\n", b.name, b.roll, b.marks);
    return 0;
}