#include<iostream>
#include<vector>
using namespace std;
int main()
{ start:
  int n,arr[10000];
  cout<<"Enter the Size of Array : ";
  cin>>n;
  cout<<"Enter the Element in Array : ";
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
 vector<int>suffix(n);
 suffix[n-1]=arr[n-1];
 for(int i=n-2;i>=0;i--)
 {
  suffix[i]=arr[i]+suffix[i+1];
 }
 cout<<"Your Suffix Sum is : ";
 for(int i=0;i<n;i++)
 {
  cout<<suffix[i]<<" ";
 }
 cout<<endl;
 goto start;

  return 0;
}