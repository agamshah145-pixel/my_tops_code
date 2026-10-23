#include<iostream>

using namespace std;

class Task
{
    public:
    string title;
    bool isDone = false;
    
    void markdone()
    {
        isDone = true;     
    }

    void display()
    {
        cout<< "Task:" <<title <<endl;
        cout<< "status: "<<(isDone ? "DONE" : "NOT DONE")<<endl;
    }
};

int main()
{

    Task a;
    a.title = "Gym work";
    a.isDone = false;

    // Before task is not done
    a.display();
    a.markdone();  // to mark task is done 

    //after task is done 
    a.display();

    return 0;;
}