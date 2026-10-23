#include <stdio.h>
#include <string.h>

char tasklist[100][50] = {"work", "play", "running", "gym", "eat"};

void markTaskDone(int index)
{
    // char tasklist[100][50];
    
    strcpy(tasklist[index], "Done");
    
}

void main()
{
    
    int index;

    for(index=0;index<5;index++)
    {
        printf("Task list no. %d : %s\n", index+1, tasklist[index]);
    
    }
    
    printf("New updated list\n");
    markTaskDone(1);
    for(index=0;index<5;index++)
    {
        printf("Task list no. %d : %s\n", index+1, tasklist[index]);
    
    }
    


}

    
