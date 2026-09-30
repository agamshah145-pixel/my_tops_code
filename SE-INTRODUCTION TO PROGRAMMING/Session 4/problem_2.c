#include <stdio.h>
void main()
{
    float productPrice = 2000.0;
    float discountpercentage = 10.0;
    float discountAmount;
    float finalPrice;
    int isMember = 1;


    discountAmount = (productPrice * discountpercentage)/100;
    finalPrice = productPrice - discountAmount;

    if(isMember==1)
    {
        finalPrice = finalPrice - (finalPrice * 5)/100;
    }

    printf("Product price : %.2f\n",productPrice);
    printf("Discount : %.2f\n",discountpercentage);


    if(isMember==1)
    {
        printf("Membership : yes\n");
    }
    else
    {
        printf("Membership : No\n");
    }


    printf("Final Price : %.2f",finalPrice);
}