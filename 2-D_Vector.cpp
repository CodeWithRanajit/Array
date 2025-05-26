#include<iostream>
#include<vector>
using namespace std;
int main()
{ start:
  int row,col;
  cout<<"Enter the Size of Row : ";
  cin>>row;
  cout<<"Enter the Size of col : ";
  cin>>col;
  vector<vector<int> >matrix(row,vector<int>(col));
  cout<<"Enter the Element in 2-D Vector : ";
  for(int i=0;i<row;i++)
  {
    for(int j=0;j<col;j++)
    {
      cin>>matrix[i][j];
    }
  }
  cout<<"Your 2-D Vector is : "<<endl;
  for(int i=0;i<row;i++)
  {
    for(int j=0;j<col;j++)
    {
      cout<<matrix[i][j]<<" ";
    }
    cout<<endl;
  }
  goto start;
  return 0;
}