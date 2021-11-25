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

int partition(int a[], int l, int r)
{

    int pivot = a[r];
    int i = l - 1;
    for (int j = 0; j <= r - 1; j++)
    {
        if (a[j] < pivot)
        {
            i++;
            swap(a[j], a[i]);
        }
    }

    swap(a[i + 1], a[r]);
    return i+1;
}

int kthSmallestElement(int a[], int n, int k)
{
    int l = 0, r = n - 1;
    while (l <= r)
    {
        int pivot = partition(a, l, r);

        if (pivot == k - 1)
            return a[pivot];
        else if (pivot > k - 1)
        {
            r = pivot - 1;
        }
        else
            l = pivot + 1;
    }
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
        long long n, k;
        cin >> n >> k;

        //  Input an array

        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        cout << "Array is : " << endl;
        parray(a, n);
        cout<<"sorted : "<<endl;
        sort(a,a+n);
        parray(a,n);

        int val=kthSmallestElement(a, n,k);
        cout<<"Kth smallest element is : "<<endl;
        if(val==-1)
        cout<<"No kth smallest exist"<<endl;
        else
        cout<<val<<endl;
    }
    return 0;
}