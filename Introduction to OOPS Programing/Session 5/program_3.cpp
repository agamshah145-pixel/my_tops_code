#include <iostream>

using namespace std;

class  FlipkartSearch
{
    public:
    void searchProduct(string productname)
    {
        cout<<"Product name : "<<productname<<endl;
    }

    void searchProduct(string productname, string category)
    {
        cout<<"Product name : "<<productname<<endl;
        cout<<"Product category : "<<category<<endl;

    }
};

int main()
{
    FlipkartSearch id1 = FlipkartSearch();
    id1.searchProduct("Samsung Galaxy S26 Ultra");
    id1.searchProduct("Samsung Galaxy S26 Ultra", "Mobiles");

    return 0;

}
