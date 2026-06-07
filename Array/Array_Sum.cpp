#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
    int arr[100];
    cout<<"Enter the number of elements (N):";
    cin>>n;
    cout<<"Enter "<<n<<" integers:"<<"\n";
    for (int i = 1; i <= n; i++)
    {
        cout<<"Element "<<i <<":";
        cin>>arr[i];
        sum=sum+arr[i];
    }
    cout<<"The sum of all elements in the array is: "<<sum;
    
}