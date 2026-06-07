//Grade Checker
#include<iostream>
using namespace std;
int grd(){
    int score;
    cout<<"Enter the student's score (0-100):";
    cin>>score;
    if (score==100 && score>=90){
        cout<<"GRADE: A";
    }
    else if (score<90 && score>=80)
    {
        cout<<"GRADE: B";
    }
    else if (score<80 && score>=70)
    {
        cout<<"GRADE: C";
    }
    else if (score<70 && score>=60)
    {
        cout<<"GRADE: D";
    }
    else if (score<60 && score>=33)
    {
       cout<<"GRADE: F";
    }
    else if (score<33)
    {
        cout<<"FAIL";
    }
    else{
        cout<<"inviled Score";
    }
}    
int main(){
    grd();
}        
