#include<iostream>
#include<climits>
using namespace std;
int main()
{ start:
  int n,arr[100];
  cout<<"Enter the Size of Array is : ";
  cin>>n;
  cout<<"Enter the Element of the Array is : ";
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  cout<<"Your Reverse Array is : ";
  int start=0,end=n-1;
   while(start<end)
   {
    swap(arr[start],arr[end]);
    start++;
    end--;
   }
  for(int i=0;i<n;i++)
  {
    cout<<arr[i]<<" ";
  }
  cout<<endl;
  goto start;
  return 0;
}