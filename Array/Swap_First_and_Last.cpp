#include<iostream>
using namespace std;
int main()
{
    int n,temp;
    int arr[100];
    cout<<"Enter the number of elements (0-100):";
    cin>>n;
    cout<<"Enter "<<n<<" integers:"<<"\n";
    for (int i = 1; i <= n; i++)
    {
        cout<<"Element "<<i <<":";
        cin>>arr[i];
    }
    cout<<"Array BEFORE swap: ";
    for (int i = 1; i <= n; i++)
    {
       cout<<arr[i]<<"\t";
    }

    cout<<"\n"<<"Array AFTER swap: ";
    
    for (int i = 1; i <= n; i++)
    {
        temp=arr[1];
        arr[1]=arr[n];
        arr[n]=temp;

        // arr[i]=arr[i]+arr[n];
        // arr[n]=arr[i]-arr[n];
        // arr[i]=arr[i]-arr[n];
        cout<<arr[i]<<"\t";
    }
}    