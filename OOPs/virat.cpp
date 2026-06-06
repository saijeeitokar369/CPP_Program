//Example of fuction overloading
#include <iostream>
using namespace std;

class virat_kohli_performance
{
    public:
    int Virat(int runs)  //member function
    {
        cout<<"Total runs scored :"<<18000<<"\n";
    } 
    int Virat(int sixs,int fours)    //formal parameters
    {
        cout<<"Total sixs and fours :"<<200 << "and"<< 150 <<"\n";
    }

    int Virat(int total_matches)  //member function
    {
        cout<<"total matches played :"<<total_matches<<"\n";
    } 
    int Virat(int catches,int winning)    //formal parameters
    {
        cout<<"Total catches and winning :"<<100 << "and"<< 800 <<"\n";
    }
    
};

int main()
{
    virat_kohli_performance o;
    o.Virat(18000);   //actual parameters
    o.Virat(200,150);
    o.Virat(250);
    o.Virat(100,800);
    return 0;
}