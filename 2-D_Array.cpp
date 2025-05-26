#include<iostream>
using namespace std;
int main()
{ start:
  int arr[100][100],row,col;
  cout<<"Enter the Size of Row of the Matrix : ";
  cin>>row;
  cout<<"Enter the Size of Col of the Matrix : ";
  cin>>col;
  cout<<"Enter the Element in the Matrix : ";
  for(int i=0;i<row;i++)
  {
    for(int j=0;j<col;j++)
    {
      cin>>arr[i][j];
    }
  }

cout<<"Your 2-D matrix is : ";
for(int i=0;i<row;i++)
{
  for(int j=0;j<col;j++)
  {
    cout<<arr[i][j]<<" ";
  }
}
cout<<endl;
goto start;
  return 0;
}