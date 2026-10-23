#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream fout("my_fav_songs.txt");
    
    fout<< "Tum hi ho" << endl;
    fout<< "Lag ja gale" << endl;
    fout<< "Kabhi kabhi" << endl;
    fout<< "jhumka" << endl;
    fout<< "Breathless" << endl;

    fout.close();

    cout<<"Data Written Successfully.";

    return 0;
}