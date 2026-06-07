// Write a function swap_reference(int &a, int &b) that successfully swaps the values of the two variables passed to it by using pass by reference. Print the original variables in main before and after the call to show the effect.

#include<iostream>
using namespace std;   
int swap_reference(int &a , int &b)
{
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"Inside function call:"<<a<<" "<<b<<"\n";
}
int main()
{
    int a,b;
    cout<<"Enter a number:";
    cin>>a>>b;
    cout<<"before call:"<<a<<" "<<b<<"\n";
    swap_reference(a,b);
    cout<<"after call:"<<a<<" "<<b;
}