#include <stdio.h>
#include <string.h>

void main()
{
    char fullName[30];
    char userName[6];
    char firstfive[6];

    printf("Enter your Fullname : ");
    scanf("%s", fullName);
    gets(userName);

    if(strlen(fullName)<5)
    {
        strcpy(userName, fullName);
    }
    else
    {
        firstfive[0] = fullName[0];
        firstfive[1] = fullName[1];
        firstfive[2] = fullName[2];
        firstfive[3] = fullName[3];
        firstfive[4] = fullName[4];
        firstfive[5] = '\0';

        strcpy(userName, firstfive);
    }

    printf("new user name is %s",userName);
}