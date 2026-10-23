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

class InstagramInfluencer : public SocialMediaUser
{
    public:
    string storytitle;    

    void poststory()
    {
        cout<<username<<"Posted a new story : "<<storytitle<<endl;
    }
};

int main()
{
    InstagramInfluencer i1;
    i1.username = "agam_shah45 ";
    i1.storytitle = " Achieve in diamond league.";
    i1.poststory();
    return 0;
}