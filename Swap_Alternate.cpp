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
  // swap alternate
  for(int i=0;i<n-1;i+=2)
  {
    swap(arr[i],arr[i+1]);
  }
  cout<<"Your Swap Alternate array is : ";
  for(int i=0;i<n;i++)
  {
    cout<<arr[i]<<" ";
  }
  cout<<endl;
  goto start;
  return 0;
}