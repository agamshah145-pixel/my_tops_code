#include <stdio.h>
void main()
{
    int choice;
    char newteam[50];
    while(1)
    {
        printf("1. View Favourite 3 IPL Teams\n2. Add a New Team\n3. Exit\n\n");
        printf("Enter Your Choice: ");
        scanf("%d", &choice);
        
        if(choice==1)
        {
            printf("1. Mumbai Indians\n2. Royal Chellengers Bengaluru\n3. Gujarat Titans\n\n");
            

        }
        else if(choice==2)
        {
            printf("Enter New IPL Team Name: ");
            scanf("%s", newteam);
            printf("Team Added Successfully!!\n\n");
            // choice++;
            // printf("Thanks for using IPL Fan App!");
            // break;

        }
        else if(choice==3)
        {
            printf("Thanks for using IPL Fan App!");
            break;
        }
        else
        {
            printf("Invalid choice! Please try again.\n");
        }
    }
}