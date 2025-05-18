#include<iostream>
using namespace std;
int main()
{
  start:
  int n,arr[1000];
  cout<<"Enter the Size of the Array is : ";
  cin>>n;
  cout<<"Enter the Element of the Array is : ";
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  //insertion sort desending order
  for(int i=1;i<n;i++)
  {
    for(int j=n-1;j>=i;j--)
    {
      if(arr[j]>arr[j-1])
      {
        swap(arr[j],arr[j-1]);
      }
    }
  }
  cout<<"Your Sorted Array is (Desending Order) : ";
  for(int i=0;i<n;i++)
  {
    cout<<arr[i]<<" ";
  }
  cout<<endl;
  goto start;
  return 0;
}