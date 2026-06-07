#include<iostream>
using namespace std;
int main()
{
    int n;
    int arr[100];
    cout<<"Enter the number of elements (0-100):";
    cin>>n;
    cout<<"Enter "<<n<<" integers:"<<"\n";
    for (int i = 1; i <= n; i++)
    {
        cout<<"Element "<<i <<":";
        cin>>arr[i];
    }
    cout<<"Reverse Array: ";
    for (int i = n; i >= 1; i--)
    {
       cout<<arr[i]<<"\t"; 
    }
}    