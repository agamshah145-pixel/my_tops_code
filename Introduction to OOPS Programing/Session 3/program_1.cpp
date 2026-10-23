#include <iostream>

using namespace std;

class  Playlist
{
    public:
    string name;

    Playlist()
    {
        name = "My Favourites";
        cout<< "Welcome to your playllists"<<endl;
    }
};

int main()
{
    Playlist p1 = Playlist();
    cout<< "Playlist name : " << p1.name << endl;
    return 0;
}
