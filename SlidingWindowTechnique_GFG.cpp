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

long long SWT(int a[], int n, int k)
{
    long long sum = 0, present_sum = 0;
    for (int i = 0; i < k; i++)
    {
        sum = sum + a[i];
    }
    present_sum = sum;
    cout << "sum from index 0 to " << k - 1 << " is " << sum << endl;
    for (int i = k; i < n; i++)
    {

        present_sum = present_sum + a[i] - a[i - k];
        cout << "sum from index " << i - k + 1 << " to index " << i << " is " << present_sum << endl;
        sum = max(present_sum, sum);
        cout << "max sum till now is : " << sum << endl;
    }
    return sum;
}

bool SWT_arrayofgivensum(int a[], int n, int k)
{

    int sum = a[0];
    for (int i = 1; i < n; i++)
    {
        if(sum+a[i]<k)
        sum=sum+a[i];
        else if(sum+a[i])
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

        cout << "\nTestcase : " << test + 1 << endl;
        long long n;
        cin >> n;
        long long k;
        cin >> k;

        //  Input an array

        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        //    cout<<"Array is : "<<endl;
        // parray(a,n);

        // cout<<endl;

        // Solution for sum of an array of K elements
        // cout<<"Max sum of array having elements "<<k<<"is "<<SWT(a,n,k);
        //
        cout << SWT_arrayofgivensum(a, n, k);
    }
    return 0;
}