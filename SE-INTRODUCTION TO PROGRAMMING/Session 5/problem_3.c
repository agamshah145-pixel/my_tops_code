#include <stdio.h>
void main()
{
    int amount,discount;
    printf("Enter your total cart amount::");
    scanf("%d", &amount);
    
    if(amount>1000)
    {
        
        if(amount>2000)
        {
            discount= (amount * 20)/100;
            printf("Your Final Price is %d",amount-discount);
        }
        else
        {
            discount= (amount * 10)/100;
            printf("Your Final Price is %d", amount-discount);
        }
    }
    else
    {
        printf("NO DISCOUNTS.\nYour Final Price is %d",amount);
        
    }
    
}