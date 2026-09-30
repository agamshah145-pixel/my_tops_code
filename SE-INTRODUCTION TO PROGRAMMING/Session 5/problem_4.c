#include <stdio.h>
void main()
{
    int age;
    printf("Enter Your Age ::");
    scanf("%d", &age);

    if(age>=18)
    {
        printf(" Eligible for Driving Licence.\n");
    }
    else
    {
        printf(" Not Eligible for Driving Licence.\n");

    }

    if(age>=21)
    {
        printf(" Eligible for credit card.\n");
    }
    else
    {
        printf(" Not Eligible for credit card.\n");

    }

    if(age>=25)
    {
        printf(" Eligible for car renatal.\n");
    }
    else
    {
        printf(" Not Eligible for car renatal.\n");

    }
}