#include <bits/stdc++.h>
using namespace std;
#define deb(x) cout << #x << "=" << x << endl

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
void parray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

void unionUsingArrays(int a[], int b[], int n, int m)
{

vector<int> v;
    for (int i = 0; i < n; i++)
    {
        bool flag = true;

        for (int j = 0; j < i; j++)
        {
            if (a[i] == a[j])
            {
                flag = false;
                break;
            }
        }
        if (flag == false)
        {
            continue;
        }
        else
        {
            bool flag2 = true;
            for (int j = 0; j < m; j++)
            {
                if (a[i] == b[j])
                {
                    // v.push_back(a[i]);
                    for(int k=0;k<m;k++)
                    {
                        if(a[k]==a[j])
                        continue;
                        else 
                        cout<<a[k]<<" ";    
    
                    flag2 = false;
                    break;
                    }
                }
            }
            if (flag2 == true)
                cout << a[i] << " ";
        }
    }

}

void unionUsingHashing(int a[], int b[], int n, int m)
{

    cout << "intersections are : " << endl;
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
        long long n, m;
        cin >> n >> m;

        //  Input an array

        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        cout << "Array 1 is : " << endl;
        parray(a, n);
        int b[n];
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
        }
        cout << "Array 2 is : " << endl;
        parray(b, m);
        unionUsingArrays(a, b, n, m);
        // unionUsingHashing(a,b,n,m);
    }
    return 0;
}