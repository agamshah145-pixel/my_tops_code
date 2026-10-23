#include <iostream>

using namespace std;

class  PaymentProcessor
{
    public:
    void  processPayment(int amount)
    {
        cout<<"Your Amount is :"<<amount<<endl;
       
    }

    void processPayment(int amount, int code)
    {
        cout<<"Your amount is : "<<amount<<" with coupon id : "<<code<<endl;
    }
};

int main()
{
    PaymentProcessor user1;
    user1.processPayment(1000);
    user1.processPayment(1000, 45);
    return 0;

}