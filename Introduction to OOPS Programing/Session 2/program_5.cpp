#include <iostream>

using namespace std;

class FoodOrder
{
    public:
    int orderid;
    string restaurantName;
    bool isDeliverd;

    FoodOrder(int orderid, string restaurantName)
    {
        isDeliverd = false;
        this->orderid = orderid;
        this->restaurantName = restaurantName;
    }

     void markdeliverd()
    {
        isDeliverd = true;
        cout<< "Order " << orderid << " has been delieverd!"<<endl;
    }
};

int main()
{
    FoodOrder order1 = FoodOrder(1, "Berger king");
    order1.markdeliverd();
    return 0;
};


