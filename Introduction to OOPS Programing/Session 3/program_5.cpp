#include <iostream>
#include <fstream>
// #include <string>
using namespace std;

class Playlist 
{
    public:
    string playlistName;

    Playlist() {
        playlistName = "My Favourites";
        cout << "Welcome to your playlist!" << endl;
    }

    ~Playlist() {
        ofstream file("autosave.txt");

        file << playlistName;

        file.close();

        cout << "Playlist auto-saved successfully!" << endl;
    }
};

int main() {
    Playlist p1 = Playlist();

    cout << "Playlist Name: " << p1.playlistName << endl;

    return 0;
}