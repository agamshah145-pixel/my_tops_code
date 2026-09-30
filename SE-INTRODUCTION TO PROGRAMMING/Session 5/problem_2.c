#include <stdio.h>
void main()
{
    int food;
    printf("It's a meal time...\n ");
    printf(" choose the meal\n 1= breakfast\n 2= lunch\n 3= dinner\n 4= snacks\n Enter the number here::");
    scanf("%d", &food);

    switch (food)
    {
        case 1:
        printf("come on ready for poha with tea.");
        break;

        case 2:
        printf("Your lunch is ready with Paneer Bhurji & Rajma Chawal.");
        break;

        case 3:
        printf("Your dinner is ready with Dal Fry & Matar Paneer.");
        break;

        case 4:
        printf("Your snacks is ready with Dalwada & Masala Puri.");
        break;

        default:
        printf("Try Some Fruits!!");
    }
}