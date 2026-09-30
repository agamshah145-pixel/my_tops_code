#include <stdio.h>

int isEligibleForOffer(int age, float orderValue)
{
    return (age >= 18 && orderValue > 500);
}

void main()
{
    int age = 25;
    float ordervalue = 50;

    int eligible = isEligibleForOffer(age,ordervalue);

    if(eligible)
    {
        printf("User is eligible for the offer.\n");
    }
    else
    {
        printf("User is not eligible for the offer.\n");

    }

    

    
}