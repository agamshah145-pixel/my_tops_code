#include <iostream>

using namespace std;

class UserProfile
{
    private:
    string number;

    public:
    void setphonenumber(string number)
    {
        if(number.length() < 10 || number.length() > 10)
        {
            cout<<"Phone number should be 10 integers only."<<endl;
        }
        else
        {
            this->number = number;
        }
    }

    string getphonenumber()
    {
        cout<<"User's Phone number : "<<number<<endl;
        return number;
    }
};

int main()
{
    UserProfile user1 = UserProfile();
    user1.setphonenumber("9999999999");
    user1.getphonenumber();

    return 0;
}