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
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        cout << "Array is : " << endl;
        parray(a, n);
       int i=1,c=1;
         while(i<n){
          
          while((i<n)&&(a[i]==a[i-1]))
          {
              i++,c++;
          }
          cout<<a[i-1]<<" "<<c<<endl;
          i++;
          c=1;
         }
         if(n==1||a[n-2]!=a[n-1])
         {
             cout<<a[n-1]<<" "<<"1"<<endl;
         }
        cout << endl;
    }
    return 0;
}