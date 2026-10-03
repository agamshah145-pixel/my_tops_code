#include <stdio.h>
#include <string.h>

struct fooditem 
{
    char itemName[30];
    float price;
    float rating;
};

void main(){

    struct fooditem zomatoorders[3] = 
    {
        {"pizza", 540.50, 4.5},
        {"punjabi thali", 399.00, 4.8},
        {"burger", 150, 4.1},
    };
    int i;
    for(i=0 ; i<3 ; i++)
    {
        printf("Food name : %s, Price : %.2f, Ratings : %.1f\n", zomatoorders[i].itemName, zomatoorders[i].price, zomatoorders[i].rating);
    }
    
}