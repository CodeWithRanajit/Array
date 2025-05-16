#include<iostream>
#include<climits>
using namespace std;
int main()
{ start:
  int n,arr[1000],fmax=INT_MIN,smax=INT_MIN,tmax=INT_MIN;
  cout<<"Enter the Size of the Array is : ";
  cin>>n;
  cout<<"Enter the Element of the Array is : ";
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }

  //find first largest element 

  for(int i=0;i<n;i++)
  {
    fmax=max(arr[i],fmax);
  }

  // find second largest element 

  for(int i=0;i<n;i++)
  {
    if(arr[i]!=fmax){
      smax=max(arr[i],smax);
    }
  }

  // find third largest element 

  for(int i=0;i<n;i++)
  {
    if(arr[i]!=fmax && arr[i]!=smax)
    {
      tmax=max(arr[i],tmax);
    }
  }

  cout<<"Third Largest Element in an array is : "<<tmax<<endl;
  goto start;
  return 0;
}