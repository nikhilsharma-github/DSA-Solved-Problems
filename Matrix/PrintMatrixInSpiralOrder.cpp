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

void printSpiralMatrixSelfComplex(vector<vector<int>> matrix, int r)
{

    // THIS ONE IS COMPLEX AND HAS BUGS ALSO
    // learn from GFG solution below
    cout << " Printing matrix in Spiral Order is : " << endl;
    int c = matrix[0].size();
    int top = 0, left = 0, bottom = r - 1, right = c - 1;

    while (bottom >= top && left <= right)
    {
        //    deb(top);
        //    deb(left);
        //    deb(bottom);
        //    deb(right);

        //   cout<<"printing upper row "<<endl;
        for (int i = top; i <= right; i++)
            cout << matrix[top][i] << " ";
        cout << endl;
        top++;

        //   cout<<"printing right column "<<endl;
        for (int i = top; i < bottom; i++)
            cout << matrix[i][right] << " ";
        cout << endl;
        right--;

        //   cout<<"printing bottom row "<<endl;
        for (int i = bottom; i >= left; i--)
            cout << matrix[bottom][i] << " ";
        cout << endl;
        bottom--;

        //   cout<<"printing left column "<<endl;
        for (int i = bottom; i >= top; i--)
            cout << matrix[i][left] << " ";
        cout << endl;
        left++;
    }
}

void printSpiralMatrixGFGSolutionBest(vector<vector<int>> m, int r)
{

    int c = m[0].size();
    int left = 0, right = c - 1, top = 0, bottom = r - 1;

    while (top <= bottom && left <= right)
    {
        //   Printing upper row
        for (int i = left; i <= right; i++)
        {
            cout << m[top][i] << " ";
        }
        top++;

        //   printing right column
        for (int i = top; i <= bottom; i++)
        {
            cout << m[i][right] << " ";
        }
        right--;

        if (top <= bottom)
            for (int i = right; i >= left; i--)
            {
                cout << m[bottom][i] << " ";
            }
        bottom--;

        if (left <= right)
        {
            for (int i = bottom; i >= top; i--)
            {
                cout << m[i][left] << " ";
            }
            left++;
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
        cout<<" Spiral print of matrix is : "<<endl;
        printSpiralMatrixGFGSolutionBest(Matrix, r);
        // printSpiralMatrix(Matrix, r);
    }
    return 0;
}