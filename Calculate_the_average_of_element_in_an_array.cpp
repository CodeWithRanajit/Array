#include<iostream>
using namespace std;
int main()
{ start:
  int n,arr[10000],sum=0;
  float avg;
  cout<<"Enter the Size of the Array is : ";
  cin>>n;
  cout<<"Enter the Element of the Array is : ";
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  for(int i=0;i<n;i++)
  {
    sum=sum+arr[i];
  }
  avg=float(sum)/n;
  cout<<"Average of Element in an array is : "<<avg<<endl;
  goto start;
  return 0;
}