#include <stdio.h>

void main()
{
    int likes = 100;
    int *ptrlikes = &likes;
    
    printf("value of likes is %d\n", *ptrlikes);
    printf("address of likes is %u", ptrlikes);

}