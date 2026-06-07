//Multiplication Table
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter number:";
    cin>>num;
    for (size_t i = 1; i <= 10; i++)
    {
        cout<<num<<" * "<<i<<" = "<<num*i<<"\n";
    }
}