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

void printSnakeMatrix(vector<vector<int>> matrix, int r)
{
    cout << " Printing matrix in snake Order is : " << endl;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < matrix[i].size(); j++)
        {
            if (i % 2 == 0)
            {
                cout << matrix[i][j] << " ";
            }
            else
            {
                cout << matrix[i][matrix[j].size() - 1 - j]<<" ";
            }
        }
        cout << endl;
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
        pmatrix(Matrix,r,c);
        printSnakeMatrix(Matrix, r);
    }
    return 0;
}