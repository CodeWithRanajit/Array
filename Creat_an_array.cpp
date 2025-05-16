#include<iostream>
using namespace std;
int main()
{ start:
  int arr[1000],n;
  cout<<"Enter the Size of the array is : ";
  cin>>n;
  cout<<"Enter the Element of the Array is : ";
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  cout<<"Your Created Array is : ";
  for(int i=0;i<n;i++)
  {
    cout<<arr[i]<<" ";
  }
  cout<<endl;
  goto start;
  return 0;
}