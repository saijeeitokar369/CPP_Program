#include<iostream>
using namespace std;
class Array_operations
{
   public:
   int insertion()
   {
      int n;
      int arr[100];
      cout<<"Enter the number of elements (N):";
      cin>>n;
      for (int i = 0; i < n; i++)
        {
             cin>>arr[i];
        }
      cout<<"-----------------------------------------------"<<"\n";  
      for (int i = 0; i < n; i++)
        {
            cout<<arr[i]<<"\n";
        }
      cout<<"-----------------------------------------------"<<"\n";  
      int max =0;
      for (int i = 0; i < n; i++)
        {
            if (arr[i] > max)
            {
                max = arr[i];
            }
        }
        cout<<"The maximum element in the array is: "<<max<<"\n";
        cout<<"-----------------------------------------------"<<"\n"; 
        cout<<" descending order : "<<"\n";
        for (int i = 0; i < n; i++)
        {
            for (int j = i+1; j < n; j++)
            {
                if (arr[i] < arr[j])
                {
                    int temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<"-----------------------------------------------"<<"\n"; 

}
};
int main()
{
    Array_operations A;
    A.insertion();
}