#include<stdio.h>
#include<stdlib.h>


void main()
{
    FILE *fp;
    char song1[50];
    char song2[50];
    fp = fopen("playlist.txt", "a");
    if(fp == NULL)
    {
        printf("This is error !!");
    }
    
    else
    {
        printf("Enter the song name 1 : ");
        fgets(song1, 50, stdin);
        fprintf(fp, "%s", song1);

        printf("Enter the song name 1 : ");
        fgets(song2, 50, stdin);
        
        fprintf(fp, "%s", song2);

        fclose(fp);
    }
    
}