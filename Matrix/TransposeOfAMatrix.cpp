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
void transposeOfAMatrix(int **arr,int r,int c){
    // NAIVE SOLUTION
    // ONLY FOR N*N matrix or SQUARE MATRIX  
    // int temp[r][c];
    // for(int i=0;i<r;i++)
    // {
    //     for(int j=0;j<c;j++)
    //     {
    //       temp[i][j]=arr[i][j];
    //     }
    // }

    // for(int i=0;i<r;i++)
    // {
    //     for(int j=0;j<c;j++)
    //     {
    //       arr[i][j]=temp[j][i];
    //     }
    // }

    // EFFICIENT APPROACH 

    for(int i=0;i<r;i++)
    {
        for(int j=i+1;j<c;j++)
        {
            if(i==j)
            continue;
            else{
                swap(arr[i][j],arr[j][i]);
            }
        }
    }

    pmatrix(arr,r,c);

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
        cout << "Transpose of matrix is  : " << endl;
        transposeOfAMatrix(arr,r,c);
        
    }
    return 0;
}