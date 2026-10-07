#include <stdio.h>
#include <string.h>

void main()
{
    int min[7];
    int i;

    printf("Music Listening Logger\n");

    for(i=0;i<7;i++)
    {
        printf("Enter the number of minutes on day: %d\n", i+1);
        scanf("%d", &min[i]);
    }

    printf("Weekly Report of the listening Music\n");

    for(i=0;i<7;i++)
    {
        printf("Day %d : Minutes %d\n", i+1, min[i]);
    }
}