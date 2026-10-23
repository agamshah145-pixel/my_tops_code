#include <iostream>

using namespace std;

class playlist
{
    public:
    string songs[5];
    int counter;

    playlist()
    {
        counter = 0;
    }

    void addsong(string songtitle)
    {
        songs[counter] = songtitle;
        counter++; 
    }

    void display()
    {
        cout<< "Updated Playlist" <<endl;
        int i;
        for(i=0;i<counter;i++)
        {
            cout << songs[i] << endl;
        }
    }
};

int main()
{
    playlist p1 = playlist();
    p1.addsong("Banger");
    p1.addsong("Lag ja gale");
    p1.addsong("Tera Fitoor");

    p1.display();
    return 0;
}