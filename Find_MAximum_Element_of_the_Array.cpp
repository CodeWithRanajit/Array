#include<iostream>
#include <climits>  
using namespace std;
int main()
{ start:
  int n,arr[10000],min=INT_MIN;
  cout<<"Enter the Size of the Array is : ";
  cin>>n;
  cout<<"Enter the Element of the Array is : ";
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  for(int i=0;i<n;i++)
  {
    if(arr[i]>min)
    {
      min=arr[i];
    }
  }
  cout<<"Maximum Element of the Array is : "<<min<<endl;
  goto start;
  return 0;
}