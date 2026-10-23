#include <iostream>

using namespace std;

class product
{
    public:
    string productname;
    int price;
    float ratings;

    product(string productname, int price, float ratings)
    {
        this->productname = productname;
        this->price = price;
        this->ratings = ratings;
    }

    void displayInfo()
    {
        cout<<"product name : "<<productname<<endl;
        cout<<"product Price : "<<price<<endl;
        cout<<"product Ratings : "<<ratings<<endl;
    }
};

int main()
{
    product item1 = product("Mobile", 40000, 4.5);
    item1.displayInfo();
    return 0;
}
