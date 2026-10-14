#include <stdio.h>

void main()
{
    float percentage;

    printf("Enter the number :");
    scanf("%f", &percentage);

    if(percentage < 0 || percentage > 100)
    {
        printf("Invalid Input please number choose between 1 to 100");
    }
    else
    {
        if(percentage>=90)
        {
            printf("Grade A: Excellent work!");
        }
        else if(percentage>=75)
        {
            printf("Grade B: Good work! Keep pushing.");    
        }
        else if(percentage>=60)
        {
            printf("Grade C: Good effort! Keep improving.");            
        }
        else if(percentage>=45)
        {
            printf("Grade D: Keep practising!");
        }
        else if(percentage<45)
        {
            printf("Grade E: Do not give up. Try again!");
        }
    }

}
