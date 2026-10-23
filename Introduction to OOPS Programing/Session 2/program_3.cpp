#include <iostream>

using namespace std;

class FoodOrder
{
    public:
    int orderid;
    string restaurantName;
    bool isDeliverd;

    void markdeliverd()
    {
        isDeliverd = true;
        cout<< "Order " << orderid << " has been delieverd!"<<endl;
    }
};

int main()
{
    FoodOrder order1;

    order1.orderid = 1;
    order1.restaurantName = "Berger King";
    order1.isDeliverd = false;

    order1.markdeliverd();
    return 0;
}