#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    ofstream fout("insta_followers.txt");

    fout<<"rahul1234"<<endl;
    fout<<"priya101"<<endl;
    fout<<"roshni786"<<endl;
    fout<<"mayank4545"<<endl;

    fout.close();


    ifstream fin("insta_followers.txt");

    string username;
    int count = 0;

    if(!fin)
    {
        cout<<"Error Opening file!";
        return 1;
    }

    while(getline(fin, username))
    {
        count++;
    }
    fin.close();

    cout<<"Total Instagram followers : "<< count<<endl;

    return 0;
}
