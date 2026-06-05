#include<iostream>
#include<string>
using namespace std;

class Addition
{
    public:
    void Add()
    {
        int a = 4;
        int b= 5;
        string c = "Umesh";
        string d = "Deep";
        cout<<a+b<<endl;
        cout<<c+d<<endl;
    }
    
};
int main()
{
    Addition a;
    a.Add();
    return 0;
}