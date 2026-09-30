#include<stdio.h>
#include<string.h>

void main()
{
    char shoppingApp[] = {"FlipKart"};

    char i[30];
    strcpy(i, shoppingApp);

    printf("copy the string %s",i);
}