#include<iostream>
using namespace std;
int main()
{ start:
  int n,arr[1000];
  cout<<"Enter a Number Here : ";
  cin>>n;
  cout<<"Enter the Element of the Array : ";
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  //insertion sort logic always compare previous element
  for(int i=1;i<n;i++)
  {
    for(int j=i;j>0;j--)
    {
      if(arr[j]<arr[j-1])
      {
        swap(arr[j],arr[j-1]);
      }
      else{
        break;
      }
    }
  }

  cout<<"Your Soretd Array is : ";
  for(int i=0;i<n;i++)
  {
    cout<<arr[i]<<" ";
  }
  cout<<endl;
  goto start;
  return 0;
}