// Write a C++ program that takes two integer inputs from the user. Calculate and display the sum, difference, product, and integer quotient of these two numbers.

#include<iostream>
using namespace std;
int main(){
    int a ,b;
    cout<<"Enter the first integer:";
    cin>>a;
    cout<<"Enter the second integer:";
    cin>>b;
    cout<<"Result:"<<"\n";
    cout<<"sum:"<<a+b<<"\n";
    cout<<"difference:"<<a-b<<"\n";
    cout<<"product:"<<a*b<<"\n";
    cout<<"integer quotient:"<<a/b;
}
