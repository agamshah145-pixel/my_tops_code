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

class Podcaster : public SocialMediaUser
{
    public:
    string podcastname;

    void publishEpisode(string episodetitle)
    {
        cout<<"Episode "<<episodetitle<<" Publish on "<<podcastname<<endl;
    }

};

int main()
{
    Youtuber y1 = Youtuber();
    y1.username = "agam_shah";
    y1.followers = 380;
    y1.uploadVideo("Total Gamming.", "Freefire gameplay ");
    y1.displayProfile();

    Podcaster p1;
    p1.podcastname = "Jay Thadeshwar show.";
    p1.publishEpisode("Story of gaming Influencer");

    return 0;
}