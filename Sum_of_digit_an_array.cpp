#include<iostream>
using namespace std;
int main()
{ start:
  int n,arr[1000],sum=0;
  cout<<"Enter the Size of the Array is : ";
  cin>>n;
  cout<<"Enter the Element of the Array : ";
 for(int i=0;i<n;i++)
 {
  cin>>arr[i];
 }
 for(int i=0;i<n;i++)
 {
  sum=sum+arr[i];
 }
 cout<<"Sum of the Element of the array is : "<<sum<<endl;
 goto start;
  return 0;
}