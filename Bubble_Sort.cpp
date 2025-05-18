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
// bubble sort
for(int i=n-2;i>=0;i--)
{
  for(int j=0;j<=i;j++)
  {
    if(arr[j]>arr[j+1])
    {
      swap(arr[j],arr[j+1]);
    }
  }
}
cout<<"Your Sorted Array is : ";
for(int i=0;i<n;i++)
{
  cout<<arr[i]<<" ";
}
cout<<endl;
goto start;
  return 0;
}