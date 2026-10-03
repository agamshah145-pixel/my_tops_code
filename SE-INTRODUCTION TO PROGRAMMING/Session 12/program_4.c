#include<stdio.h>

struct  Bio 
{
    char description[50] ;
    int age;
};

struct InstaProfile
{
    char username[30];
    int followers;
    struct Bio name;
};

void main()
{
    struct InstaProfile detail = {"agamshah", 410, "I Love My India", 25};

    printf("Username : %s\nFollowers : %d\nDescription : %s\nAge : %d",detail.username, detail.followers, detail.name.description, detail.name.age);
}