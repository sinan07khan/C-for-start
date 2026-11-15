// C program to generate a random number between 1 and 64 and print the corresponding district

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int n, random;

    printf("Enter a number (1-64): ");
    scanf("%d", &n);

    srand(time(NULL));

    random = rand() % 64 + 1;

    printf("Random number: %d\n", random);

    if (random == 1)
        printf("District: Bagerhat");
    else if (random == 2)
        printf("District: Bandarban");
    else if (random == 3)
        printf("District: Barguna");
    else if (random == 4)
        printf("District: Barishal");
    else if (random == 5)
        printf("District: Bhola");
    else if (random == 6)
        printf("District: Bogura");
    else if (random == 7)
        printf("District: Brahmanbaria");
    else if (random == 8)
        printf("District: Chandpur");
    else if (random == 9)
        printf("District: Chattogram");
    else if (random == 10)
        printf("District: Chuadanga");
    else if (random == 11)
        printf("District: Cox's Bazar");
    else if (random == 12)
        printf("District: Cumilla");
    else if (random == 13)
        printf("District: Dhaka");
    else if (random == 14)
        printf("District: Dinajpur");
    else if (random == 15)
        printf("District: Faridpur");
    else if (random == 16)
        printf("District: Feni");
    else if (random == 17)
        printf("District: Gaibandha");
    else if (random == 18)
        printf("District: Gazipur");
    else if (random == 19)
        printf("District: Gopalganj");
    else if (random == 20)
        printf("District: Habiganj");
    else if (random == 21)
        printf("District: Jamalpur");
    else if (random == 22)
        printf("District: Jashore");
    else if (random == 23)
        printf("District: Jhalokathi");
    else if (random == 24)
        printf("District: Jhenaidah");
    else if (random == 25)
        printf("District: Joypurhat");
    else if (random == 26)
        printf("District: Khagrachhari");
    else if (random == 27)
        printf("District: Khulna");
    else if (random == 28)
        printf("District: Kishoreganj");
    else if (random == 29)
        printf("District: Kurigram");
    else if (random == 30)
        printf("District: Kushtia");
    else if (random == 31)
        printf("District: Lakshmipur");
    else if (random == 32)
        printf("District: Lalmonirhat");
    else if (random == 33)
        printf("District: Madaripur");
    else if (random == 34)
        printf("District: Magura");
    else if (random == 35)
        printf("District: Manikganj");
    else if (random == 36)
        printf("District: Meherpur");
    else if (random == 37)
        printf("District: Moulvibazar");
    else if (random == 38)
        printf("District: Munshiganj");
    else if (random == 39)
        printf("District: Mymensingh");
    else if (random == 40)
        printf("District: Naogaon");
    else if (random == 41)
        printf("District: Narail");
    else if (random == 42)
        printf("District: Narayanganj");
    else if (random == 43)
        printf("District: Narsingdi");
    else if (random == 44)
        printf("District: Natore");
    else if (random == 45)
        printf("District: Nawabganj");
    else if (random == 46)
        printf("District: Netrokona");
    else if (random == 47)
        printf("District: Nilphamari");
    else if (random == 48)
        printf("District: Noakhali");
    else if (random == 49)
        printf("District: Pabna");
    else if (random == 50)
        printf("District: Panchagarh");
    else if (random == 51)
        printf("District: Patuakhali");
    else if (random == 52)
        printf("District: Pirojpur");
    else if (random == 53)
        printf("District: Rajbari");
    else if (random == 54)
        printf("District: Rajshahi");
    else if (random == 55)
        printf("District: Rangamati");
    else if (random == 56)
        printf("District: Rangpur");
    else if (random == 57)
        printf("District: Satkhira");
    else if (random == 58)
        printf("District: Shariatpur");
    else if (random == 59)
        printf("District: Sherpur");
    else if (random == 60)
        printf("District: Sirajganj");
    else if (random == 61)
        printf("District: Sunamganj");
    else if (random == 62)
        printf("District: Sylhet");
    else if (random == 63)
        printf("District: Tangail");
    else if (random == 64)
        printf("District: Thakurgaon");

    return 0;
}