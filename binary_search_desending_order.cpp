#include<iostream>
using namespace std;
int binarysearch(int arr[],int n,int key)
{
  int start=0,end=n-1;
  while(start<=end)
  {
    int mid=start+(end-start)/2;
    if(arr[mid]==key)
    {
      return mid;
    }
    else if(arr[mid]<key)
    {
      end=mid-1;
    }
    else{
      start=mid+1;
    }
  }
  return -1;
}
int main()
{
  start:
  int n,arr[10000],key;
  cout<<"Enter the Size of the array is : ";
  cin>>n;
  cout<<"Enter the Element of the Array is : ";
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  cout<<"Which Element you Find In an Array : ";
  cin>>key;
  int ans=binarysearch(arr,n,key);
  if(ans==-1)
  {
    cout<<"Element Not Present in the Array."<<endl;
    return 0;
  }
  cout<<"Your Element is Present in Index : "<<ans<<endl;
  goto start;
  return 0;
}