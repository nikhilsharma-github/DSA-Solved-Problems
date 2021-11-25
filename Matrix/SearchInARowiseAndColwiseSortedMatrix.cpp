#include <bits/stdc++.h>
using namespace std;
#define deb(x) cout << #x << "=" << x << endl

void pmatrix(int *a[], int r, int c)
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
void searchInSortedMatrix(int *a[],int r,int c,int val)
{
   
   int right=c-1,top=0;
   while(top<r&&right>=0)
   {
       deb(top);
       deb(right);
       deb(a[top][right]);
       if(a[top][right]==val)
       {
           cout<<"value "<<val<<" found at index : "<<top<<" "<<right<<endl;
           return;
       }
       else if(a[top][right]>val)
       {
           right--;
       }
       else if(a[top][right]<val)
       {
           top++;

       }
   }
   cout<<"value is not present "<<endl;


}
void parray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
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
        long long r, c, val;
        cin >> r >> c >> val;

        int *mat[r];
        for (int i = 0; i < r; i++)
        {
            mat[i] = new int[c];
            for (int j = 0; j < c; j++)
            {
                cin >> mat[i][j];
            }
        }

        cout<<"Given matrix is : "<<endl;
        pmatrix(mat,r,c);
        cout<<"Value to find : "<<val<<endl;
        searchInSortedMatrix(mat,r,c,val);
    }
    return 0;
}