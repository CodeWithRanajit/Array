#include<iostream>
using namespace std;
int main()
{ 
  start:
  int row,col,arr[100][100];
  cout<<"Enter the Size of Row in the Matrix : ";
  cin>>row;
  cout<<"Enter the Size of Col in the Matrix : ";
  cin>>col;
  cout<<"Enter the Element in Matrix : ";
  for(int i=0;i<row;i++)
  {
    for(int j=0;j<col;j++)
    {
      cin>>arr[i][j];
    }
  }
  cout<<"Your Wave MAtrix is : ";
  for(int j=0;j<col;j++)
  {
    if(j%2==0)
    {
      for(int i=0;i<row;i++)
      {
        cout<<arr[i][j]<<" ";
      }
    }
    else{
      for(int i=col-1;i>=0;i--)
      {
        cout<<arr[i][j]<<" ";
      }
    }
  }
  cout<<endl;
  goto start;
  return 0;
}