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

void bubble_sort(int a[], int n)
{
//  deb(n);
   
   bool swapCheck=false;
    for (int i = n - 1; i >= 1; i--)
    {
        // deb(i);
        swapCheck=false;
        for (int j = 1; j <= i; j++)
        {
            // deb(j);
            // deb(a[j-1]);
            // deb(a[j]);
            if (a[j-1] > a[j]){
                swap(a[j], a[j-1]);
             swapCheck=true;
            }
        }
        if(swapCheck==false)
        break;
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

        bubble_sort(a, n);
        cout << "Array after BUBBLE SORT IS : " << endl;
        parray(a, n);
             cout << endl;
    }
    return 0;
}