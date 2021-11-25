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
        int m=INT_MIN;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        cout << "Array is : " << endl;
        parray(a, n);
 
        // O(N^2) solution
        for (int i = 0; i < n; i++)
        {

            for (int j = i; j < n; j++)
            {
               
               m=max(m,a[j]-a[i]);
            }
        }
        cout<<"Using naive double for loop : "<<endl;
        cout<<"Maximum difference is : "<<m<<endl;
        cout<<endl;

        // efficient solution
        int l=0,r=n-1;
        int li=-1,hi=n;
        int maxx=a[1]-a[0],minn=a[0];
        for(int i=0;i<n;i++){
            
             maxx=max(maxx,a[i]);
           
          minn=min(minn,a[i]);
          
        }
        cout<<"Using efficient algo : "<<endl;
        cout<<"Maximum difference is : "<<maxx-minn<<endl;

    }
    return 0;
}