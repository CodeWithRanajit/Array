#include<iostream>
using namespace std;
int main()
{ start:
  int n,arr[100];
  cout<<"Enter the Size of the Array is : ";
  cin>>n;
  cout<<"Enter the Elment of the Array is : ";
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  //selection sort
  for(int i=0;i<n-1;i++)
  {
    int index=i;
    for(int j=i+1;j<n;j++)
    {
      if(arr[j]<arr[index])
      {
        index=j;
      }
    }
    swap(arr[index],arr[i]);
  }
  cout<<"Your Selection Sort is : ";
  for(int i=0;i<n;i++)
  {
    cout<<arr[i]<<" ";
  }
  cout<<endl;
  goto start;
  return 0;
}