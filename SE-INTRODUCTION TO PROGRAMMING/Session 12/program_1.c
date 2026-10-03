#include<stdio.h>
#include<string.h>

struct playlist
{
    char song[50];
    char artist[50];
    int duration;
};

void main()
{
    struct playlist song1 = {"Tum hi ho", "Arijit singh", 4};

    struct playlist song2;
    strcpy(song2.song, "Banger"); 
    strcpy(song2.artist, "Badshah"); 
    song2.duration = 2;

    printf("1) %s - %s - %d min\n", song1.song, song1.artist, song1.duration);
    printf("2) %s - %s - %d min", song2.song, song2.artist, song2.duration);

}