// Leap Year Check
#include <iostream>
using namespace std;
int main(){
    int year;
    cout<<"Enter year:";
    cin>>year;
    if (year%4==0)
    {
        cout<<"leap year";
    }
    else{
    cout<<"Not leap year";
    }
}