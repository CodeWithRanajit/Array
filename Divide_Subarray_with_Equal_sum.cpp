#include<iostream>
#include<vector>
using namespace std;

bool divide(vector<int>arr)
{
  int total_sum=0;
  for(int i=0;i<arr.size();i++)
  {
    total_sum+=arr[i];
  }
  int prefix=0,ans;
  for(int i=0;i<arr.size();i++)
  {
    prefix+=arr[i];
    ans=total_sum-prefix;
    if(ans==prefix)
    {
      return 1;
    }
  }
  return 0;

}
int main()
{ start:
  int n;
  cout<<"Enter the Size of Array : ";
  cin>>n;
  vector<int>arr(n);
  cout<<"Enter the Element in Array : ";
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  cout<<divide(arr)<<endl;
 goto start;
  return 0;
}
