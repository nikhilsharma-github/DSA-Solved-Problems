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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long test = 1;
    cin >> test;
    while (test--)
    {
        cout << "Testcase : " << test + 1 << endl;
        long long n, x;
        cin >> n >> x;

        bool val = false;
        //  Input an array

        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        cout << "Array is : " << endl;
        parray(a, n);

        // cout<<endl;

        int l = 0, r = n - 1, i = -1;
        while (l <=r)
        {
          
            int mid = (l + r) / 2;
            if (x < a[mid])
            {
                r=mid-1;
            }

            else if (x > a[mid])
            {
                l = mid+1;
            }
            else if (x == a[mid])
            {
                val = true;
                i = mid;
                break;
            }
        }
        if (val == false)
            cout << "Element " << x << " not present " << endl;

        else if (val == true)
            cout << "Element " << x << " present at index  " << i << endl;
    }
    return 0;
}