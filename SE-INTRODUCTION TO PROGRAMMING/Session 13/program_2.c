#include<stdio.h>
#include<stdlib.h>


void main()
{
    FILE *fp;
    char song[50];
    fp = fopen("playlist.txt", "r");
    if(fp == NULL)
    {
        printf("This is error !!");
    }
    
    else
    {

        while(fgets(song, 50, fp)!= NULL)
        {
            printf("Song name : %s",song);
        }
        
        fclose(fp);
    }
    
}