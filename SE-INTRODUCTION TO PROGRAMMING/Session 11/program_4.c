#include <stdio.h>

void  incrementFollowers(int *followers, int n) 
{
    int i;
    for(i=0;i<n;i++)
    {
        *(followers+i) = *(followers+i) + 100; 
    }
}


void main()
{
    int followers[5] = {1200, 1300, 1500, 2100, 4250};
    int i;

    incrementFollowers(followers, 5);

    
    for(i=0;i<5;i++)
    {
        printf("Friend %d : %d\n", i+1, followers[i]);
    }

    
    

}