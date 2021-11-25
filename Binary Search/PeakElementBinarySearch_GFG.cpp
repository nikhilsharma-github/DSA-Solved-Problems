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

int peakElement(int a[], int n)
{

    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (((mid == 0) || (a[mid - 1] <= a[mid])) && ((mid == n - 1) || (a[mid + 1] <= a[mid])))
        return a[mid];
        if(mid>0&&a[mid-1]>=a[mid])
        high=mid-1;
        else
        low=mid+1;
          

    }
    // while (low <= high)
    // {
    //     int mid = (low + high) / 2;

    //     if((mid==0||a[mid-1]<=a[mid])&&((mid==n-1)||
    //     (a[mid+1]<=a[mid])))
    //     return a[mid];
    //      if(mid>0&&a[mid-1]>=a[mid])
    //     high=mid-1;
    //     else
    //     low=mid+1;
    // }
    return -1;
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
        // long long x;
        // cin>>x;

        //  Input an array

        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        cout << "Array is : " << endl;
        parray(a, n);

        cout << "peak element is : " << peakElement(a, n) << endl;
    }
    return 0;
}