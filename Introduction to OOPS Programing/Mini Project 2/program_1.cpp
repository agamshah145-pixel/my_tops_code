#include <iostream>

using namespace std;

class Content
{
    public:
    string title;
    string platform;
    int views;
    string status;

    void display()
    {
        cout<<"Content title is "<<title<<"share with "<<platform<<"Total views of this content is "<<views<<" and status is "<<status;
    }
};

int main()
{
    Content c1 = Content();
    c1.title = "Gaming Video ";
    c1.platform = "You tube. ";
    c1.views = 15000 ;
    c1.status = "Live. ";
    c1.display();
    return 0;
}
