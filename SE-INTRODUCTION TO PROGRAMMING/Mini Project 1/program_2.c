#include <stdio.h>

void main()
{
    int min[7];
    int i;
    int choice;

    for (i = 0; i < 7; i++)
    {
        min[i] = 0;
    } 

    while(choice !=3)
    {
        printf("Music Listening Logger\n");
        printf("1) Log new listening minutes\n2) View Weekly Summery\n3) Exit the app.\n");
        printf("Enter the choice : ");
        scanf("%d", &choice);

        if(choice == 1)
        {
            for(i=0;i<7;i++)
            {
                printf("Enter the new minutes on day : %d = ", i+1);
                scanf("%d", &min[i]);
            }
        }

        else if(choice == 2)
        {
            printf("View Weekly Summery\n");
            for(i=0;i<7;i++)
            {
                printf("Day %d : Minutes %d\n", i+1, min[i]);
            }
        }

        else if(choice == 3)
        {
            printf("Thanks for using app.");
        }

        else
        {
            printf("Invalid number ! Choose correctly.");
        }
    }
}