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

int BSLO_I(int a[], int n, int x, int l, int r)
{

    while (l <= r)
    {
        int mid = (l + r) / 2;

        if (a[mid] == x && (mid == n - 1 || a[mid + 1] != x))
            return mid + 1;
        else if (x < a[mid])
            r = mid - 1;
        else if (x > a[mid] || (a[mid + 1] == a[mid]))
            l = mid + 1;
    }
    return -1;
}
int BSLO_R(int a[], int n, int x, int l, int r)
{

    if (l > r)
        return -1;
    int mid = (l + r) / 2;

    if (a[mid] == x && ((mid == n - 1) || (a[mid + 1]) != a[mid]))
        return mid + 1;
     else if(x>a[mid]||(a[mid+1]==a[mid]))
    return BSLO_R(a,n,x,mid+1,r);
     else
    return BSLO_R(a,n,x,l,mid-1);


     
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
        cout << " value to find : " << x << endl;
        cout << "Iterative sol" << endl;
        cout << "last occurence of the element " << x << " is : " << BSLO_I(a, n, x, 0, n - 1) << endl;
        cout<<endl;
        cout<<"Recursive"<<endl;
           cout<<"last occurence of the element "<<x<<" is : "<<BSLO_R(a,n,x,0,n-1)<<endl;
    }
    return 0;
}