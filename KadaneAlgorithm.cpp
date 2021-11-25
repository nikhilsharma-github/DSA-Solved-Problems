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
int kadaneAlgorithm(int a[], int n)
{

    if (n == 1)
        return a[0];
    else
    {

        int maxFinal = a[0], maxTillnow = a[0];

        for (int i = 1; i < n; i++)
        {

            maxTillnow = maxTillnow + a[i];
            cout<<" i : "<<i<<endl;
            cout<<" maximum so far : "<<maxFinal<<endl;
            cout<<" maximum till now : "<<maxTillnow<<endl;

            if (maxFinal < maxTillnow)
            {
                cout<<" maxFinal < maxTillnow"<<endl;
                maxFinal = maxTillnow;
            }
            if (maxTillnow < 0)
            {
                maxTillnow = 0;
            cout<<" maxTillnow becomes 0"<<endl;
            }
        }
        return maxFinal;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long test = 1;
    // cin >> test;
    // while (test--)
    // {
        // cout << "Testcase : " << test + 1 << endl;
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

        cout << kadaneAlgorithm(a, n) << endl;
    // }
    return 0;
}