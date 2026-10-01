#include <stdio.h>
#include <stdlib.h>

void main()
{
    FILE *fp;

    char song[50] = {"\n1. Tum hi ho\n2. Channa mereya\n3. Tere bin"};
    fp = fopen("playlist.txt", "w");

    if(fp == NULL)
    {
        printf("This is error !!");
    }
    else
    {
        printf("My top 3 favorite songs from Spotify %s\n",song);
      
    }

    fclose(fp);
}