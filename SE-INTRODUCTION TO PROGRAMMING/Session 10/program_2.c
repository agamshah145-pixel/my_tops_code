#include <stdio.h>
#include <string.h>

void main()
{
    char username1[30] = {"Agam"};
    char username2[30] = {"Agam"};

    int i = strcmp(username1, username2);

    printf("value of i is %d",i);
}


// if both strings are same then it gives int value which is zero.

// Otherwise it gives 1 or -1 value.