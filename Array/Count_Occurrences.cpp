#include<iostream>
using namespace std;
int main()
{
    int n,target,count=0;
    int arr[100];
    cout<<"Enter the number of elements (0-100):";
    cin>>n;
    cout<<"Enter "<<n<<" integers:"<<"\n";
    for (int i = 1; i <= n; i++)
    {
        cout<<"Element "<<i <<":";
        cin>>arr[i];
    }
    cout<<"Enter the element to count occurrences :";
    cin>>target;
    for (int i = 0; i <= n; i++)
    {
        if (arr[i]==target)
        {
             count+=1;
        }   
    }
    cout<<"The number "<<target<<" occurs "<<count<<" times.";
}    