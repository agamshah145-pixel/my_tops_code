#include <stdio.h>
void main()
{
    int likes, comments, shares;
    likes = 1000;
    comments = 10;
    shares = 55;

    if(likes>=1000 || comments>200 && shares>50)
    {
        printf("Post is Trending on Instagram",likes,comments,shares);
    }
    else
    {
        printf("Post is not Trending on Instagram",likes,comments,shares);
    }
    
}