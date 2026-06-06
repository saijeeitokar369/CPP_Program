//Largest of Three
#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter number A:";
    cin>>a;
    cout<<"Enter number B:";
    cin>>b;
    cout<<"Enter number C:";
    cin>>c;
    if (a>b && a>c){
        cout<<"Largest number is A:"<<a;
    } 
    else if (b>c)
    {
       cout<<"Largest number is B:"<<b;
    }
    else{
        cout<<"Largest number is c:"<<c;
    }

}