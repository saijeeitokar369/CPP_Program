// Write a function swap_value(int a, int b) that attempts to swap the values of its parameters (a and b) inside the function body. Call this function from main and print the original variables before and after the call to demonstrate that the swap does not affect the original variables in main.

#include<iostream>
using namespace std;

int swap_value(int a , int b)
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
    swap_value(a,b);
    cout<<"after call:"<<a<<" "<<b;
}