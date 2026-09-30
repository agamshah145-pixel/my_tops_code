#include <stdio.h>
void main()
{
    const float gstRate = 18.0;
    float basePrice = 500.0;
    float gstAmount = (basePrice * gstRate)/100;
    float finalPrice = basePrice + gstAmount;

    printf("GST Rate is constant is %.1f\n",gstRate);
    printf("Base Price is %.2f\n",basePrice);
    printf("GST Amount is %.2f\n",gstAmount);
    printf("Final Price for this product is %.3f\n",finalPrice);


}