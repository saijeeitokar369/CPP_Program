//Simple Calculator
#include<iostream>
using namespace std;
int main(){
   int a,b;
   char op;
   cout<<"enter a:";
   cin>>a;
   cout<<"enter operator(+,-,*,/):";
   cin>>op;
   cout<<"enter b:";
   cin>>b;
   if (op=='+')
   {
    cout<<a+b;
   }
   else if (op=='-')
   {
     cout<<a-b;
   }
   else if (op=='*')
   {
    cout<<a*b;
   }
   else if (op=='/')
   {
    cout<<a/b;
   }   
}


