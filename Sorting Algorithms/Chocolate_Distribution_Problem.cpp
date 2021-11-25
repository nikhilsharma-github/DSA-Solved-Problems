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

void chocolateDistribution(int a[], int n, int c)
{
    sort(a, a + n);
    int mindiff = INT_MAX;
    cout<<"Sorted array is : "<<endl;
    parray(a,n);

    for (int i = c - 1; i <= n-1; i++)
    {
        deb(i);
        deb(a[i]);
        deb(a[i-c+1]);
        mindiff = min(mindiff, a[i] - a[i - c+1]);
        deb(mindiff);
    }

    cout<<mindiff<<endl;
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
        long long n, c;
        cin >> n >> c;

        //  Input an array

        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        cout << "Array is : " << endl;
        parray(a, n);
        cout << "Minimum difference between max and min chocolate distributed is : " << endl;
        chocolateDistribution(a, n, c);
    }
    return 0;
}