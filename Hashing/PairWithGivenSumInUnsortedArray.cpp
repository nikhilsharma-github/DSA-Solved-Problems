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

bool pairWithGivenSum(int a[], int n, int sum)
{
    unordered_set<int> s;
    for (int i = 0; i < n; i++)
    {
        if (s.find(sum - a[i]) != s.end())
        {
            cout << "pair is : " << a[i] << " and " << sum - a[i] << endl;
            return true;
        }
        else
            s.insert(a[i]);
    }
    return false;
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
        long long n, sum;
        cin >> n >> sum;

        //  Input an array

        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        cout << "Array is : " << endl;
        parray(a, n);
        bool ans = pairWithGivenSum(a, n, sum);

        if (ans)
        {
            cout << endl;
        }
        else
            cout << "no pair exists " << endl;
        return 0;
    }

}