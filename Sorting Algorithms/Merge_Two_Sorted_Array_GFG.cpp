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
void merge_two_sorted_arrays(int a[], int b[], int n, int m)
{
    int c[m + n] = {0};

    int indexC = 0, indexA = 0, indexB = 0;
    while (indexA <= n - 1 && indexB <= m - 1)
    {
        deb(indexA);
        deb(a[indexA]);
        deb(b[indexB]);
        deb(indexC);
        if (a[indexA] <= b[indexB])
        {
            c[indexC] = a[indexA];
            indexC++, indexA++;
        }
        else
        {
            c[indexC] = b[indexB];
            indexC++, indexB++;
        }
        cout << " array c after insertion : " << endl;
        parray(c, indexC);
    }

    if (indexA != n)
    {
        cout << "Array A is not empty, so clearing it " << endl;
        while (indexA <= n - 1)
        {
            deb(indexA);
            deb(a[indexA]);
            deb(indexC);

            c[indexC] = a[indexA];
            indexC++, indexA++;
            parray(c, indexC);
        }
    }
    if (indexB != m)
    {
        cout << "Array B is not empty, so clearing it " << endl;
        while (indexB < m)
        {
            deb(indexB);
            deb(b[indexB]);
            deb(indexC);
            c[indexC] = b[indexB];
            indexC++, indexB++;
        }
    }

    cout << "Merged array C is : " << endl;
    parray(c, n + m);
}

void print_two_sorted_array(int a[], int b[], int m, int n)
{

    int i = 0, j = 0;
    while (i < m && j < n)
    {
        // deb(i);
        // deb(a[i]);
        // deb(j);
        // deb(b[j]);

        if (a[i] <= b[j])
        {
            cout << a[i] << " ";
            i++;
        }
        else
        {
            cout << b[j] << " ";
            j++;
        }
    }

    while (i < m)
    {
        // deb(i);
        // deb(a[i]);
        cout << a[i] << " ";
        i++;
    }
    while (j < n)
    {
        // deb(j);
        // deb(b[j]);
        cout << b[j] << " ";
        j++;
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
        // cout << "Testcase : " << test + 1 << endl;
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

        // cout << "Array A is : " << endl;

        // parray(a, n);
        // cout << "Array B is : " << endl;
        // parray(b, m);

        // merge_two_sorted_arrays(a, b, n, m);
        // cout<<"printing 2 sorted array together : "<<endl;
          print_two_sorted_array(a,b,n,m);
        // cout << endl;
    }
    return 0;
}