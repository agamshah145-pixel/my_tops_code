#include <stdio.h>

int main()
{
    float hours[7];
    int i;
    float sum = 0;
    float average;

    
    for(i=0;i<=6;i++)
    {
        printf("Enter the study hours day %d (0-24):",i+1);
        scanf("%f",&hours[i]);   
        if(hours[i] < 0 || hours[i] > 24)
        {
            printf("Invalid input. please start again !!\n");
            return 1;
        }
        
        else
        {
            sum = sum + hours[i];   
        }
    }

    printf("Total study hours %.2f.\n",sum);

    printf("Daily average  %.2f.\n",average = sum/7);

    float highest = hours[0];

    for(i=0;i<=7;i++)
    {
        if(hours[i] > highest)
        {
            highest = hours[i];
        }
    }
    printf("Highest study hours of the day %.2f\n",highest);

    int j;
    for (i = 0; i < 7; i++)
    {
        printf("Day %d: ", i + 1);

        for (j = 0; j < (int)hours[i]; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}