#include <iostream>

using namespace std;

class Product
{
    public:
    virtual void upload() = 0;
};

class Electronics : public Product
{
    public:
    void upload()
    {
        cout<<"Navratri festive offer on electronics item flat 30 percentage off."<<endl;
    }
};

class Clothing : public Product
{
    public:
    void upload()
    {
        cout<<"Navratri festive offer on Clothing item upto 50 percentage off."<<endl;

    }
};

int main()
{
    // Product *electronic = new Electronics();
    // Product *cloth = new Clothing();

    // electronic->upload();
    // cloth->upload();

    // delete electronic;
    // delete cloth;

    Electronics e1 = Electronics();
    e1.upload();

    Clothing c1 = Clothing();
    c1.upload();

    return 0;
}