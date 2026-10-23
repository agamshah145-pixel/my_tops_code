#include <iostream>

using namespace std;

class togglePublic
{
    public:
    string name;
    string createdOn;
    bool isPublic;

    void display()
    {
        cout<<name <<" ("<<createdOn<<") ";
        cout<<(isPublic ? "[public]" : "[private]")<<endl;
    }

    void markPublic()
    {
        isPublic = !isPublic;
    }
};

int main()
{
    togglePublic p1;
    p1.name = "Banger";
    p1.createdOn = "2026-04-28";
    p1.isPublic = false;

    p1.markPublic();
    p1.display();
    p1.markPublic();
    p1.display();

    return 0;

};