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
int BinarysearchFirstoccurence(int a[], int n, int x, int l, int r)
{

    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (a[mid] == x && ((mid == 0) || a[mid - 1] != a[mid]))
            return mid;
        else if (x < a[mid] || (a[mid - 1] == a[mid]))
            r = mid - 1;
        else
            l = mid + 1;
    }
    return -1;
}

int BinarysearchLastoccurence(int a[], int n, int x, int l, int r)
{

    if (l > r)
        return -1;

    int mid = (l + r) / 2;

    if(a[mid]==x&&(a[mid+1]!=a[mid])||mid==n-1)
    return mid;
    else if(x>a[mid]||(a[mid+1]==a[mid]))
    return BinarysearchLastoccurence(a,n,x,mid+1,r);
    else
    return BinarysearchLastoccurence(a,n,x,l,mid+1);


//    if(a[mid]==x)
//    return mid;
//     else if (a[mid] > x)
//         return BinarysearchLastoccurence(a, n, x, l, mid - 1);
//     else if (a[mid] < x)
//         return BinarysearchLastoccurence(a, n, x, mid + 1, r);
    // else
    // {

    //     if (a[mid] == x && (a[mid + 1] == a[mid] || mid != n ))
    //         return BinarysearchLastoccurence(a, n, x, mid + 1, r);
    //     // else if(a[mid]==x&&(a[mid+1])!= a[mid] || mid == n )
    //     else
    //         return mid;
    // }
}
int numberofoccurences(int a[], int n, int x, int l, int r)
{
    int firstoccurence = BinarysearchFirstoccurence(a, n, x, 0, n);
    cout<<"First Occurence of the element is : "<<firstoccurence<<endl;
    int lastoccurence = 0;

    if (firstoccurence == -1)
        return 0;
    else if (firstoccurence != -1)
    {

        lastoccurence = BinarysearchLastoccurence(a, n, x, 0, n);
    cout<<"last Occurence of the element is : "<<lastoccurence<<endl;
    }
    return lastoccurence - firstoccurence + 1;
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
        long long x;
        cin >> x;

        //  Input an array

        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        cout << "Array is : " << endl;
        parray(a, n);

        // cout<<endl;

        cout << "Number of occurences of element " << x << " is : " << endl;
        cout << numberofoccurences(a, n, x, 0, n - 1) << endl;
    }
    return 0;
}