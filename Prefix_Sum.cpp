#include<iostream>
#include<vector>
using namespace std;
int main()
{ start:
  int n,arr[1000];
  cout<<"Enter the size of Array : ";
  cin>>n;
  cout<<"Enter the Element in Array : ";
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
 vector<int>a(n);

 // calculate prfix sum 
 a[0]=arr[0];
 for(int i=1;i<n;i++)
 {
   a[i]=arr[i]+a[i-1];
 }
 cout<<"Your Prefix Sum is : ";
 for(int i=0;i<n;i++)
 {
   cout<<a[i]<<" ";
 }
 cout<<endl;
 goto start;

  return 0;
}