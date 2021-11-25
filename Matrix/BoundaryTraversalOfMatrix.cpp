#include <bits/stdc++.h>
using namespace std;
#define deb(x) cout << #x << "=" << x << endl

void pmatrix(int **a, int r, int c)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}
void printBoundary(int **arr, int row, int col)
{
    if(row==1)
    {
        for(int i=0;i<col;i++)
        cout<<arr[0][i]<<" ";
    }
    if(col==1)
    {
        for(int i=0;i<row;i++)
        cout<<arr[i][0]<<" ";
    }
    else{
        for(int i=0;i<col;i++)
        {
            cout<<arr[0][i]<<" ";
        }
        for(int i=1;i<row;i++)
        {
            cout<<arr[i][col-1]<<" ";
        }
        for(int i=col-2;i>=0;i--)
        {
            cout<<arr[row-1][i]<<" ";
        }
        for(int i=row-2;i>=0;i--)
        {
            cout<<arr[i][0]<<" ";
        }
        
    }
  
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long test = 1;
    cin >> test;
    while (test--)
    {
        cout << "Testcase : " << test + 1 << endl;

        int r, c;
        cin >> r >> c;

        int **arr;
        arr = new int *[r];

        for (int i = 0; i < r; i++)
        {
            arr[i] = new int[c];
            for (int j = 0; j < c; j++)
            {
                cin >> arr[i][j];
            }
        }
        cout << "given matrix Is : " << endl;
        pmatrix(arr, r, c);
        cout << "Boundary elements are : " << endl;
        printBoundary(arr, r, c);
    }
    return 0;
}