//Swap Two Numbers
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter A and B:";
    cin>>a>>b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<a<<" "<<b;
}
