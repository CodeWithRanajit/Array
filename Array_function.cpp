#include<iostream>
using namespace std;

void function(int a[],int n)
{
  cout<<"Your Array is : ";
  for(int i=0;i<n;i++)
  {
    cout<<a[i]<<" ";
  }
  cout<<endl;
  return;
}
int main()
{ start:
  int n,arr[10000];
  cout<<"Enter the Size of The Array is : ";
  cin>>n;
  cout<<"Enter the Element of the Array is : ";
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  function(arr,n);
  goto start;
  return 0;
}