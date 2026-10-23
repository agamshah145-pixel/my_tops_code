#include <iostream>

using namespace std;

class  SocialMediaUser
{
    public:
    string username;
    int followers;

    void displayProfile()
    {
        cout<< "User name : "<< username<<"\nFollowers : "<<followers<<endl;
    }
};

int main()
{
    SocialMediaUser user1;
    user1.username = "agam_shah";
    user1.followers = 380;
    user1.displayProfile();
    return 0;
}