// Natural Number Sum
#include<iostream>
using namespace std;
int main(){
    int num,sum=0;
    cout<<"Enter number:";
    cin>>num;
    for (int i = 1; i < num+1; i++)
    {
        sum=sum+i;
    }
    cout<<"Sum of Natural Number :"<<sum;
    
}