#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>


void main()
{
    FILE *fp;
    char song[50];
    char match[50];
    int i;
    fp = fopen("playlist.txt", "r");
    if(fp == NULL)
    {
        printf("This is error !!");
    }
    
    else
    {

        while(fgets(song, 50, fp)!= NULL)
        {
            for(i=0;song[i]!='\0';i++)
            {
                match[i] = song[i];
            }
            match[i] = '\0';
        

        if(strstr(match, "Love")!= NULL)
        {
            printf("%s", song);
        }
        
        }
    fclose(fp);
    }
    
}