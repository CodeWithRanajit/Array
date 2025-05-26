#include<iostream>
using namespace std;
int find(int arr[][100] , int row, int col,int target)
{
  for(int i=0;i<row;i++)
  {
    for(int j=0;j<col;j++)
    {
      if(arr[i][j]==target)
      {
        return (i*col+j);
      }
    }
  }
  return 0;
}
int main()
{ start:
  int row,col,arr[100][100],target;
  cout<<"Enter the Size of row of the Matrix : ";
  cin>>row;
  cout<<"Enter the Size of col of the Matrix : ";
  cin>>col;
  cout<<"Enter the Element in Matrix : ";
  for(int i=0;i<row;i++)
  {
    for(int j=0;j<col;j++)
    {
      cin>>arr[i][j];
    }
  }
  cout<<"Which Element You Find in Matrix : ";
  cin>>target;
  int ans=find(arr,row,col,target);
  if(ans==0)
  {
    cout<<"Element is Not Present in Matrix."<<endl;
  }
  else{
    cout<<"Your Element is Present in index : "<<ans<<endl;
  }
  goto start;
  return 0;
}