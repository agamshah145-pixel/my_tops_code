#include <iostream>
#include <string.h>

using namespace std;

class Tasklist
{
    string title;
    int index;

    public:
    void addTask(string title)
    {
        this->title = title;
    }

    void markTaskDone(int index)
    {
        this->index = index;
    }

    void showcase()
    {
        cout<< "Task: " <<title <<endl;
        cout<< "status: "<< (index ? "DONE" : "NOT DONE")<<endl;
    }

};

int main()
{
    Tasklist a1, a2, a3;
    a1.addTask("walk");
    a1.markTaskDone(1);
    a1.showcase();

    a2.addTask("Run");
    a2.markTaskDone(0);
    a2.showcase();

    a3.addTask("Gym");
    a3.markTaskDone(1);
    a3.showcase();


    return 0;
}