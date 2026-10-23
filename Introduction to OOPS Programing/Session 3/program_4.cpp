#include<iostream>

using namespace std;

class Ticket
{
    public:
    string title;

    Ticket()
    {
        this->title = title;
    }

    ~Ticket()
    {
        cout<< "Saving your ticket of "<<title<<endl;
    }
};

int main()
{
    Ticket t1 = Ticket();
    t1.title = "Drishyam.";

    return 0;
}