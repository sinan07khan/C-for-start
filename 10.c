// This program calculates the grade based on the marks entered by the user.
#include <stdio.h>

int main()
{
    float m1, m2, r, area;

    printf("m1 = ");
    scanf("%f", &m1);

    printf("m2 = ");
    scanf("%f", &m2);

    printf("r = ");
    scanf("%f", &r);

    area = (m1 * m2) / (2 * 3.1416 * r * r);
    
    printf("(m1 * m2) / (2 * 3.1416 * r * r) or ");
    
    printf("Area = %f", area);

    return 0;
}
