#include <stdio.h>
void main()
{
    int cricketScores[4][2] = 
    {
        {230, 155},
        {135, 199},
        {91, 154},
        {189, 122}
    };
    int i,j;
    for(i=0;i<=3;i++)
    {
        printf("Match %d\n",i+1);
        
        if(cricketScores[i][0]>cricketScores[i][1])
        
            {
                printf("Highest team score is %d\n",cricketScores[i][0]);
            }
            else
            {
                printf("Highest team score is %d\n",cricketScores[i][1]);

            }
            // printf("Team scores %d\n",cricketScores[j][i]);
        
    }

}