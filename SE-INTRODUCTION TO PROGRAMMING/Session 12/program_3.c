#include<stdio.h>

struct time
{
    int hours;
    int minutes;
};

struct movieShow
{
    char movie[30];
    int screen;
    struct time show;
};

void main()
{
    struct movieShow movie1 = {"Drishyam", 3, 19, 55};
    printf("Movie Name: %s ,Screen: %d, Time: %d:%d", movie1.movie, movie1.screen, movie1.show.hours, movie1.show.minutes);
}