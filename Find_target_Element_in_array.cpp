#include<iostream>
using namespace std;
int main()
{ 
  int n,tar,arr[1000];
  cout<<"Enter the Size of the array is : ";
  cin>>n;
  cout<<"Enter the Element of the Array is : ";
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  cout<<"Which Element You Find in an Array : ";
  cin>>tar;
  for(int i=0;i<n;i++)
  {
    if(arr[i]==tar){
      cout<<"Element Found Successfully. Target Element index is : "<<i<<endl;
      return 0;
    }
  }
  cout<<"Element is Not Found : -1"<<endl;
  return 0;
}