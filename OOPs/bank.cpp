//Example of fuction overloading
#include <iostream>
using namespace std;

class banking_system
{
    public:
    int withdraw(int amount)  //member function
    {
        int balance=10000;
        if(amount>balance)
        {
            cout<<"Insufficient balance\n";
        }
        else
        {
            balance-=amount;
            cout<<"Amount withdrawn :"<<amount<<"\n";
            cout<<"Remaining balance :"<<balance<<"\n";
        }
    } 
    int withdraw(double amount)    //formal parameters
    {
        double balance=10000.0;
        if(amount>balance)
        {
            cout<<"Insufficient balance\n";
        }
        else
        {
            balance-=amount;
            cout<<"Amount withdrawn :"<<amount<<"\n";
            cout<<"Remaining balance :"<<balance<<"\n";
        }
    }

    int deposit(int amount)  //member function
    {
        int balance=10000;
        balance+=amount;
        cout<<"Amount deposited :"<<amount<<"\n";
        cout<<"Total balance :"<<balance<<"\n";
    }
    int deposit(double amount)    //formal parameters
    {
        double balance=10000.0;
        balance+=amount;
        cout<<"Amount deposited :"<<amount<<"\n";
        cout<<"Total balance :"<<balance<<"\n";
    }
    int check_balance()
    {
        int balance=10000;
        cout<<"Current balance :"<<balance<<"\n";
    }
    int check_balance(double balance)
    {
        cout<<"Current balance :"<<balance<<"\n";
    }
};
int main()
{ 
    banking_system o;
    o.withdraw(5000);   //actual parameters
    o.withdraw(5000.5);
    o.deposit(2000);
    o.deposit(2007.5);
    o.check_balance(10000);
    o.check_balance(12000.5);
    return 0;
}