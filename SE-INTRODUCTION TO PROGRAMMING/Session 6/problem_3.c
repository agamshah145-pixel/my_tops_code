#include <stdio.h>
void main()
{
    int guess;
    do
    {
        printf("Guess the song number :\n");
        printf("1. Chaiyya Chaiyya\n");
        printf("2. Tujhe Dekha Toh\n");
        printf("3. Tum Hi Ho\n");

        printf("Enter your guess :");
        scanf("%d", &guess);

        if(guess==1)
        {
            printf("correct , The song is perfact.\n");
        }
        else
        {
            printf("Wrong guess! Try again.\n");
        }
    }while(guess!=1);
}