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

void twoPointer(int a[], int n, int sum)
{

    int l = 0, r = n - 1;
    int l1 = -1, r1 = -1;

    while (l < r)
    {

        if (a[l] + a[r] < sum)
            l++;
        else if (a[l] + a[r] > sum)
            r--;
        else
        {
            l1 = l;
            r1 = r;
            break;
        }
    }
    if(l1==-1&&r1==-1)
    cout<<"No pair exist for sum "<<sum<<endl;
    else
    {

    cout<<" number "<<a[l1]<<" of index : "<<l1<<endl;
    cout<<" number "<<a[r1]<<" of index : "<<r1<<" will form pair"<<endl;
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
        long long sum = 0;
        cin >> sum;

        //  Input an array
         cout<<" N: "<<n<<endl;
         cout<<" sum : "<<sum<<endl;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        cout << "Array is : " << endl;
        parray(a, n);

        twoPointer(a, n, sum);

        // cout<<endl;
    }
    return 0;
}