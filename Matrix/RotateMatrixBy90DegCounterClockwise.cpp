#include <bits/stdc++.h>
using namespace std;
#define deb(x) cout << #x << "=" << x << endl

void parray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

void pmatrix(vector<vector<int>> a, int r, int c)
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

void rotateBy90DegEfficinet(vector<vector<int>> arr, int r, int c) {

    // EFFICIENT APPROACH WITH NO EXTRA SPACE 
    // FIRST DO TRANSPOSE OF THE MATRIX AND THEN REVERSE THE ROWS 
 
    // doing transpose first 
    for(int i=0;i<r;i++)
    {
        for(int j=i+1;j<c;j++)
        swap(arr[i][j],arr[j][i]);
    }

    // interchanging rows
    for(int i=0;i<r/2;i++)
    {
        for(int j=0;j<c;j++)
        {
            swap(arr[i][j],arr[r-1-i][j]);
        }
    }
    pmatrix(arr,r,c);

}
void rotateBy90Deg(vector<vector<int>> arr, int r, int c)
{

    // NAIVE APPROACH OF O(N^2) TC AND O(N) SC 
    vector<vector<int>> temp = arr;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            temp[i][j] = arr[j][c - 1 - i];
        }
    }
    arr = temp;
    pmatrix(arr, r, c);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long test = 1;
    cin >> test;
    while (test--)
    {
        int r, c, temp;
        cout << "Testcase : " << test + 1 << endl;

        cin >> r >> c;
        deb(test);
        deb(r);
        deb(c);
        vector<vector<int>> Matrix;

        for (int i = 0; i < r; i++)
        {
            vector<int> c;
            for (int j = 0; j < r; j++)
            {
                cin >> temp;
                c.push_back(temp);
            }
            Matrix.push_back(c);
        }
        cout << "Given matrix is : " << endl;
        pmatrix(Matrix, r, c);
        cout << "Matrix after rotation by 90 deg is : " << endl;
        // rotateBy90Deg(Matrix, r, c);
        rotateBy90DegEfficinet(Matrix,r,c);
    }
    return 0;
}