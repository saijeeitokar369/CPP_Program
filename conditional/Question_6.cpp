//Simple Interest
#include<iostream>
using namespace std;
int main(){
    float principal, rate , time,SI ;
    cout<<"Enter principal:";
    cin>>principal;
    cout<<"Enter rate:";
    cin>>rate;
    cout<<"Enter time:";
    cin>>time;
    SI=(principal*rate*time)/100;
    cout<<"Simple Interest:"<<SI;
}