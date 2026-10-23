#include <iostream>

using namespace std;


class  SocialMediaUser
{
    public:
    string username;
    int followers;

    void uploadContent()
    {
        cout<< "User name : "<< username<<"\nFollowers : "<<followers<<endl;
    }
};
class  InstagramUploader : public SocialMediaUser
{
        public:
        string username;
        int followers;

        void uploadContent()
        {
            cout<< "User name : "<< username<<"\nFollowers : "<<followers<<endl;
        }
    
};

class  YouTubeUploader : public SocialMediaUser
{
        public:
        string username;
        int followers;

        void uploadContent()
        {
            cout<< "User name : "<< username<<"\nFollowers : "<<followers<<endl;
        }
    
};

int main()
{
    SocialMediaUser s1 = SocialMediaUser();
    s1.username = "agam_shah45";
    s1.followers = 3800;

    InstagramUploader i1 = InstagramUploader();
    i1.username = "total_gaming";
    i1.followers = 400;

    YouTubeUploader y1 = YouTubeUploader();
    y1.username = "Desi Gamers";
    y1.followers = 2000;

    s1.uploadContent();
    i1.uploadContent();
    y1.uploadContent();

    return 0;

}
            
    
