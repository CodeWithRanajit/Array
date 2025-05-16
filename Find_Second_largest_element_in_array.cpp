#include<iostream>
#include<climits>
using namespace std;
int main()
{
  start:
  int n,arr[10000],firstmax=INT_MIN,secondmax=INT_MIN;
  cout<<"Enter the Size of the array is : ";
  cin>>n;
  cout<<"Enter the Element of the Array is : ";
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
 
  // find first largest element in array

  for(int i=0;i<n;i++)
  {
    if(arr[i]>firstmax)
    {
      firstmax=arr[i];
    }
  }

  //find second largest element in array

  for(int i=0;i<n;i++)
  {
    if(arr[i]!=firstmax)
    {
      secondmax=max(arr[i],secondmax);
    }
  }
  cout<<"Second Largest Element in an Array is : "<<secondmax<<endl;
  goto start;
  return 0;
}