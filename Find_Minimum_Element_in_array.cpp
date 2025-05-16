#include<iostream>
#include <climits>  
using namespace std;
int main()
{ start:
  int n,arr[1000],max=INT_MAX;
  cout<<"Enter the Size of The Array is : ";
  cin>>n;
  cout<<"Enter the Element of the Array is : ";
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
 for(int i=0;i<n;i++)
 {
  if(arr[i]<max){
    max=arr[i];
  }
 }
 cout<<"Minimum Element of the Array is : "<<max<<endl;
 goto start;
  return 0;
}