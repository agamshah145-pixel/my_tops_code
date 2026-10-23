#include <iostream>

using namespace std;

class  InstaStory
{
    protected:
    int storyviews;

    public:
    void setstoryviews(int storyviews)
    {
        this->storyviews = storyviews;
    }

    
};

class SponsoredStory : public InstaStory
{
    public:
    int getstoryviews() 
    {
        cout<<"story views : "<<storyviews<<endl;
        return storyviews;
    }
};

int main()
{
    SponsoredStory s1 = SponsoredStory();
    s1.setstoryviews(500);
    s1.getstoryviews();

    return 0;
}