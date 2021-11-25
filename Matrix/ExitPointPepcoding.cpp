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
void exitPoint(int **a, int row, int col)
{
   
   int rowmin=0,colmin=0;
   int rowmax=0,colmax=1;
   while(true){

        while()
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
        cout << "Exit point is  " << endl;
        exitPoint(arr, r, c);
    }
    return 0;
}