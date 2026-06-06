#include<iostream>
#include<string>
using namespace std;

class youtube
{
    protected:
    int subscribe;
    public:
    youtube(int subscribe)
    {
        cout<<" NUMBER OF SUBSCRIBERS: "<<subscribe<<endl;
    }
    int operator ++ ()
    {
        subscribe++;
    }
    int display()
    {
        cout<<"Subscribe: "<<subscribe<<endl;
    }
};
int main()
{
    youtube y(100);
    ++y;
    y.display();
    return 0;
}