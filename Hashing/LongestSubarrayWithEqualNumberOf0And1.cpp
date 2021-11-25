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
void longestSubWithEqNoOf0And1_Hash(int a[], int n)
{
    int res = 0, preSum = 0;
    unordered_map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
            a[i] = -1;
    }
    for (int i = 0; i < n; i++)
    {
        deb(i);
        deb(a[i]);
        preSum = preSum + a[i];
        m.insert({a[i], i + 1});
        deb(preSum);
    
        if(m.find(0) != m.end())
        {
            cout<<"zero found at index : "<<i<<endl;
            res = max(res, m.at(0));
        }
    }
    cout<<res<<endl;
}
// 0 0 0 1 1 0 1 0 1 0 0 1

void longestSubWithEqNoOf0And1(int a[], int n)
{
    int co = 0, c1 = 0, res = 0;

    for (int i = 0; i < n; i++)
    {
        cout << " i " << i << endl;
        co = 0, c1 = 0;
        for (int j = i; j < n; j++)
        {
            if (a[j] == 0)
                co++;
            else
                c1++;

            deb(j);
            deb(co);
            deb(c1);
            if (co == c1)
            {
                cout << co << " " << c1 << endl;
                res = max(res, co + c1);
            }
        }
    }
    cout << res << endl;
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
        long long n;
        cin >> n;

        //  Input an array

        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        cout << "Array is : " << endl;
        parray(a, n);
        // longestSubWithEqNoOf0And1(a, n);
        longestSubWithEqNoOf0And1_Hash(a, n);
    }
    return 0;
}