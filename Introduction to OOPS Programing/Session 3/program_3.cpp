#include<iostream>

using namespace std;

class Movie
{   
    public:
    string moviename;
    int price;
    
    Movie(string moviename, int price)
    {
        this->moviename = moviename;
        this->price = price;
    }

    void movieshow()
    {
        cout << "Movie name: "<<moviename<<endl;
        cout << "Movie price: "<<price<<endl;
    }
};

class Movie1
{
    public:
    string moviename;
    int price;
    
    Movie1(Movie s)
    {
        this->moviename = s.moviename;
        this->price = s.price;
    }

    void movieshow()
    {
        cout << "Movie name: "<<moviename<<endl;
        cout << "Movie price: "<<price<<endl;
    }
};


int main()
{
    Movie m1 = Movie("Drishyam", 400);
    m1.movieshow();

    Movie1 m2 = Movie1(m1);
    m2.movieshow();
    return 0;
}