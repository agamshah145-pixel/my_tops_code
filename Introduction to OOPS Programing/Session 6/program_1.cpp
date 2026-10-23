#include <iostream>

using namespace std;

class Song
{
    private:
    string title;
    string artist;

    public:

    void settitle(string title)
    {
        if(title.length()>0)
        {
            this->title = title;
            cout<<"Song title : "<<title<<endl;
        }
        else
        {
            cout<<"Error : Title cannot be empty!"<<endl;
        }
    }

    void setartist(string artist)
    {
        if(artist.length()<30)
        {
            this->artist = artist;
            cout<<"Artist name : "<<artist<<endl;
        }
        else
        {
            cout<<"Length is more than 30 char."<<endl;
        }
    }
    string gettitle()
    {
        return title;
    }

    string getartist()
    {
        return artist; 
    }
};

int main()
{
    Song s1 = Song();
    s1.settitle("Tum hi ho");
    s1.setartist("Arijit Singh");
    s1.gettitle();
    s1.getartist();

    return 0;
}