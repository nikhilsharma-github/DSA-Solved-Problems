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

void subarrayWithLongestSum(int a[], int n, int sum)
{
    unordered_map<int, int> m;
    int preSum = 0, res = 0,indexDiff=0;
    m.insert(0);
    for (int i = 0; i < n; i++)
    {
        preSum = preSum + a[i];
        if (m.find(preSum)!=m.end())
        {
            res=i+1;
        }
        if(m.find(preSum)==m.end())
        {
            m.insert({preSum,i});
        }
        if(m.find(sum-preSum)!=m.end())
        {
            indexDiff=i-(m[sum-preSum]);
            res=max(res,indexDiff);
        }

    }
    cout<<res<<endl;
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
        long long n,s;
        cin >> n>>s;

        //  Input an array

        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        cout << "Array is : " << endl;
        parray(a, n);
        subarrayWithLongestSum(a, n, s);
    }
    return 0;
}