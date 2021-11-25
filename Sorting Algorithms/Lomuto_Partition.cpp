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


void lomuto_Partition(int a[],int l,int h,int p)
{
    int i=l-1;

    for(int j=l;j<=h;j++)
    {
        if(a[j]<a[p])
        {
            i++;
            swap(a[i],a[j]);
        }

    }
    // swap(a[p],a[h-1]);
    swap(a[i+1],a[p]);


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
        long long n, p;
        cin >> n >> p;

        //  Input an array

        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        cout << "Array is : " << endl;
        parray(a, n);
        

        // LOMUTO PARTITION
        lomuto_Partition(a,0,n-1,p-1);
        cout << "Array after LOMUTO partition : " << endl;
        parray(a, n);
    }
    return 0;
}