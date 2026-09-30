#include <stdio.h>
void main()
{
    int orderfood[7] = {350, 431, 690, 742, 832, 900, 621};
    int i;
    int sum=0;
    for(i=0;i<=6;i++)
    {
        sum = sum + orderfood[i];
    }
    printf("The total values of food order is %d \n",sum);
    int average;
    average = sum/7;
    printf("The average spend for the week %d",average);

}