#include <bits/stdc++.h>
using namespace std;
#define deb(x) cout << #x << "=" << x << endl


void printvectorOfVectors(vector<vector<int>> arr,int r)
{
    
    for(int i=0;i<r;i++){

        for(int j=0;j<arr[i].size();j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

}
void vectorOfVectors(){
    int r=3,c=4;

    vector<vector<int>> arr;
    for(int i=0;i<r;i++)
    {
        vector<int> k;
      for(int j=0;j<c;j++)
      {
           k.push_back(i+1+j);
      }
      arr.push_back(k);


    }
    printvectorOfVectors(arr,r);


}
void printarrayOfVectors(vector<int> arr[],int r){

    for(int i=0;i<r;i++){

        for(int j=0;j<arr[i].size();j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

void arrayOfVectors(){
    int r=3,c=4;
    
    vector<int> arr[r];

    for(int i=0;i<r;i++)
    {
        vector<int> k;
      for(int j=0;j<c;j++)
      {
           arr[i].push_back(i+1+j);
      }


    }
    printarrayOfVectors(arr,r);
}
void printarrayOfPointers(int *a[],int r,int c){

  for(int i=0;i<r;i++)
  {
      for(int j=0;j<c;j++)
      {
          cout<<a[i][j]<<" ";
      }
      cout<<endl;
  }
}
void arrayOfPointers(){

   int r=3,c=4;
    int *a[r];

    for(int i=0;i<r;i++)
    {
        a[i]=new int [c];
        for(int j=0;j<c;j++)
        {
          a[i][j]=(i+j+1);
        }
    }
    printarrayOfPointers(a,r,c);
}
void printdoublePointerArray(int **arr, int r, int c)
{
    for (int i = 0; i < r; i++)
      {
          for(int j=0;j<c;j++)
          {
              cout<<arr[i][j]<<" ";
          }
          cout<<endl;
      }
}
void doublePointerArray()
{

    int r = 3, c = 4;
    int **arr;
    arr = new int *[r];

    for (int i = 0; i < 3; i++)
    {
        arr[i] = new int[c];
        for (int j = 0; j < 4; j++)
        {
            arr[i][j] = (i + j + 1);
        }
    }
    printdoublePointerArray(arr, r, c);
}

void printsimple2Darray(int a[3][4])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}
void simple2Darray()
{
    int a[3][4];
    int r = 3, c = 4;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            a[i][j] = (i + j + 1);
        }
    }
    printsimple2Darray(a);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    simple2Darray();
    doublePointerArray();
    arrayOfPointers();
    arrayOfVectors();
    vectorOfVectors();

    // }
    return 0;
}