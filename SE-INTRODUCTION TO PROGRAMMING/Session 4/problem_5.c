#include <stdio.h>
void main()
{
    int followercount = 500;

    printf("before increament follower count : %d\n",followercount);
    printf("pre increament follower count : %d\n",++followercount);
    printf("after increament follower count : %d\n",followercount);

    followercount = 500;

    printf("before increament follower count : %d\n",followercount);
    printf("post increament follower count : %d\n",followercount++);
    printf("after increament follower count : %d\n",followercount);
    
}