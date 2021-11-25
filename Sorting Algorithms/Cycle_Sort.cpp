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

void cycle_sort(int a[],int n){

int c=0;
    for(int i=0;i<n;i++)
    {
        c=0;
        for(int j=i+1;j<n;j++)
        {
            if(a[j]>a[i])
            c++;
        }
        
    }
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

        //  Input an array

        int a[n],b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            b[i]=a[i];
        }
        cout << "Array is : " << endl;
        parray(a, n);

        cycle_sort(a,n);
        cout << "Array after CYCLE SORT IS : " << endl;
        parray(a, n);
             cout << endl;
    }
    return 0;
}