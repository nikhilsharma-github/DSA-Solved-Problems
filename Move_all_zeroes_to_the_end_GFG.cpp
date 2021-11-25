#include <bits/stdc++.h>
using namespace std;
#define deb(x) cout << #x << "=" << x << endl

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long test = 1;
    cin >> test;
    while (test--)
    {

        long long n;
        cin >> n;

        //  Input an array
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        cout << "Array is : " << endl;
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;

        // Naive solution

        // for (int i = 0; i < n; i++)
        // {

        //     if (a[i] == 0)
        //     {
        //         for (int j = i + 1; j < n; j++)
        //         {

        //             if (a[j] != 0)
        //             {
        //                 int temp = a[i];
        //                 a[i] = a[j];
        //                 a[j] = temp;
        //             }
        //         }
        //     }
        // }
        // cout << "after shifting : " << endl;
        // cout << "Array is : " << endl;
        // for (int i = 0; i < n; i++)
        // {
        //     cout << a[i] << " ";
        // }
        // cout << endl;
        
        //  efficient solution
        int res=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]!=0)
            {
            //   a[res]=a[i];
            int temp=a[res];
            a[res]=a[i];
            a[i]=temp;
              res++;
            }


        }
        // for(int i=res;i<n;i++)
        // a[i]=0;

        cout << "after shifting : " << endl;
        cout << "Array is : " << endl;
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;

    
    }
    return 0;
}