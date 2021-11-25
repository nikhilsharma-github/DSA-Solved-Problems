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

int countoccurences(int a[],int n,int x,int l,int r)
{
    cout<<"x is : "<<x<<endl;

   while(l<=r)
   {
    //    deb(l);
    //    deb(r);
     int mid=(l+r)/2;
    //  deb(mid);
     
    // deb(a[mid]);
    // deb(a[mid-1]);

       if(a[mid]==0)
       l=mid+1;
       else if(a[mid]==1)
       {
           if(a[mid-1]+a[mid]==1||mid==0)
           {

           return mid;

           }
           else
           r=mid-1;
       }
             
   }
   return -1;

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
        cin >> n;

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

       int occ= countoccurences(a,n,1,0,n-1);

       if(occ==-1)
       cout<<"Occurence of 1 is  0 "<<endl;
       else
       cout<<"Occurence of 1 is : "<<n-occ<<endl;
    
    }
    return 0;
}