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

void intersectionOfTwoSortedArrays(int a[], int b[], int n, int m)
{
    int indexA = 0, indexB = 0;
    while (indexA <= n - 1 && indexB <= m - 1)
    {
        // deb(indexA);
        // deb(a[indexA]);
        // deb(indexB);
        // deb(b[indexB]);

        if (indexA > 0 && a[indexA] == a[indexA - 1] && indexA < n)
        {
            indexA++;
            continue;
        }
        if (indexB > 0 && b[indexB] == b[indexB - 1] && indexB < m)
        {
            indexB++;
            continue;
        }
        if (a[indexA] < b[indexB])
        {
            indexA++;
        }
        if(a[indexA]>b[indexB])
        {
            indexB++;
        }
        if(a[indexA]==b[indexB])
        {
           cout << a[indexA] << " ";
            indexA++;
            indexB++;
        }
    }
    cout<<endl;
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
        int b[m];
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
        }

        cout << "Array A is : " << endl;

        parray(a, n);
        cout << "Array B is : " << endl;
        parray(b, m);

        intersectionOfTwoSortedArrays(a, b, n, m);
    }
    return 0;
}