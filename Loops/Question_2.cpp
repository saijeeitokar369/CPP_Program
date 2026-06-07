//Triangle Type
#include<iostream>
using namespace std;
int main(){
    int s1,s2,s3;
    cout<<"Enter s1,s2,s3:";
    cin>>s1>>s2>>s3;
    if (s1 + s2 <= s3 || s1 + s3 <= s2 || s2 + s3 <= s1) 
    {
        cout<<"DO NOT form a valid triangle";
    }
    else if (s1==s2 && s2==s3)
    {
        cout<<"Equilateral.";
    }
    else if (s1==s2||s1==s3||s2==s3)
    {
        cout<<"Isosceles";
    }
    else{
        cout<<"Scalene";
    }
    
    
}