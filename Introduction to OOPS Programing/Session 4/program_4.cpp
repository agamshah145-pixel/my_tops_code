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
class GamingYouTuber : public Youtuber
{
    public:
    string gamename;
    void streamGame()
    {
        cout<<username<<"is now streaming "<<gamename << " on" <<channelname<<endl;
    }
};

int main()
{
    GamingYouTuber g1 = GamingYouTuber();
    g1.username = "ajjubhai_94 ";
    g1.gamename = "Free Fire";
    g1.channelname = " Total Gamming.";
    g1.streamGame();

    return 0;
}