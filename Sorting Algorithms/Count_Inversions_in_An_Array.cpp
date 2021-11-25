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
int countAndMerge(int a[], int low, int mid, int high)
{
    int las = mid - low + 1, ras = high - mid,res=0;
    int LA[las], RA[ras];
    for (int i = 0; i < las; i++)
        LA[i] = a[i + low];
    for (int i = 0; i < ras; i++)
        RA[i] = a[i + mid + 1];
      int i=0,j=0,c=low;
    while (i < las && j < ras)
    {

        if (LA[i] <= RA[j])
            a[c++]=LA[i++];
        else
       {
          a[c++]=RA[j++];
          res+=(las-i); 
       }
    }

    while(i<las)
    a[c++]=LA[i++];
    
    while(j<ras)
    a[c++]=RA[j++];

    return res;
}

int countInversions(int a[], int low, int high)
{

    int res = 0;
    if (low < high)
    {
        int mid = (low + high) / 2;
        res = res + countInversions(a, low, mid);
        res += countInversions(a, mid + 1, high);
        res += countAndMerge(a, low, mid, high);
    }
    return res;
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

        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        cout << "Array is : " << endl;
        parray(a, n);
        cout<<"Number of inversions are : "<<endl;
        cout<<  countInversions(a, 0, n - 1)<<endl;
    }
    return 0;
}