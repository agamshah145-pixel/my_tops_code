#include <stdio.h>
void main()
{
    int dailySteps[7] = {1000,1300,2500,900,3000,3277,788};
    printf("Weekly data of Daily Steps\n");
    int i;
    for(i=0;i<=6;i++)
    {
        printf("Day %d : Steps : %d\n",i+1,dailySteps[i]);
    }
}