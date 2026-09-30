#include <stdio.h>
void main()
{
    int teams;
    printf("\n 1= Mumbai Indians\n 2= Chennai Supee Kings\n 3= Royal Challengers Bengaluru\n 4= Kolkata Knight Riders\n 5= Rajasthan Royals\n 6= Sunrisers Hyderabad\n 7= Delhi Capitals\n 8= Punjab Kings\n 9= Lucknow Super Giants\n 10= Gujarat Titans\n ");
    printf("Enter Your Favourite IPL team ::");

    scanf("%d",&teams);

    if(teams==1)
    {
        printf(" Go Mumbai Indians!");
    }
    else if (teams==2)
    {
        printf(" CSK for the wins.");
    }
    else if (teams==3)
    {
        printf(" Ee Sala Cup Namde!");
    }
    else if (teams==4)
    {
        printf(" Come on KKR!");
    }
    else if (teams==5)
    {
        printf("Halla Bol, Rajasthan Royals! ");
    }
    else if (teams==6)
    {
        printf(" Orange Army, let's go!");
    }
    else if (teams==7)
    {
        printf(" Come on Delhi Capitals!");
    }
    else if (teams==8)
    {
        printf(" Sher Squad, let's roar! ");
    }
    else if (teams==9)
    {
        printf(" Go Lucknow Super Giants!");
    }
    else if (teams==10)
    {
        printf(" Go Gujarat Titans!"); 
    }
    else
    {
        printf(" Team not found.");
    }
}