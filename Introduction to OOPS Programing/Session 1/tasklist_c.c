#include <stdio.h>
#include <string.h>

void main()
{
    int i;
    char tasklist[100][50] = {"work", "play", "running", "gym", "eat"};

    for(i=0;i<5;i++)
    {
        printf("Task list no. %d : %s\n", i+1, tasklist[i]);
    }

}