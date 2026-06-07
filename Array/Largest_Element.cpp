#include<iostream>
using namespace std;
int main()
{
    int n;
    int arr[100];
    cout<<"Enter the number of elements (0-100):";
    cin>>n;
    cout<<"Enter "<<n<<" integers:"<<"\n";
    int max=0;
    for (int i = 1; i <= n; i++)
    {
        cout<<"Element "<<i <<":";
        cin>>arr[i];
    }
    cout<<"largest element in the array is: ";
    for (int i = 0; i <= n; i++)
    {
        if (arr[i]>max)
        {
            max=arr[i];
        }   
    }
    cout<<max;
}
