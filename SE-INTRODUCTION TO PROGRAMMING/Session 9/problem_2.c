#include <stdio.h>
void main()
{
    int  playlistRatings[5][5] = {
        {4, 4, 5, 4, 5},
        {5, 3, 4, 5, 2},
        {3, 1, 3, 2, 3}
    };
    int i,j;
    for(i=0;i<=4;i++)
    {
        printf("Day %d :\n",i+1);
        for(j=0;j<=2;j++)
        {
            printf("Ratings: %d\n",playlistRatings[j][i]);
        }
    }
}

