#include <iostream>

using namespace std;

class playlist
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

    void markpublic()
    {
        isPublic = true;
    }
};

int main()
{
    playlist p1;
    p1.name = "Banger";
    p1.createdOn = "2026-04-28";
    p1.isPublic = false;

    p1.display();
    p1.markpublic();
    p1.display();
    return 0;
}
