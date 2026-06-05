//Example of fuction overloading
#include <iostream>
using namespace std;

class demo_function_overloading
{
    public:
    int add(int a,int b)  //member function
    {
        cout<<"Sum of two integers :"<<a+b<<"\n";
    } 
    int add(double a,double b)    //formal parameters
    {
        cout<<"Sum of two another values :"<<a+b<<"\n";
    }
};
int main()
{
    demo_function_overloading o;
    o.add(10,20);   //actual parameters
    o.add(10.5,20.5);
    return 0;
}