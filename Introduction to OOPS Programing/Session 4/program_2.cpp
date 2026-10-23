#include <iostream>

using namespace  std;

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

class Youtuber : public SocialMediaUser
{
    public:
    string channelname;
    string title;

    void uploadVideo(string channelname, string title)
    {
        cout<< "video name is "<<title<< "uploaded to "<<channelname<<endl;
    }
};

int main()
{
    Youtuber y1 = Youtuber();
    y1.username = "agam_shah";
    y1.followers = 380;
    y1.uploadVideo("Total Gamming.", "Freefire gameplay ");
    y1.displayProfile();

    return 0;
}