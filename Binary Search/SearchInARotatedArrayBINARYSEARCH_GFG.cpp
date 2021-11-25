#include <bits/stdc++.h>
using namespace std;
#define deb(x) cout << #x << "=" << x << endl

void parray(int a[],int n){
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int searchInARotatedArray(int  a[],int n,int x){
 
   int l=0,r=n-1;
    while(l<=r){
        int mid=(l+r)/2;

        if(a[mid]==x)
        return mid;
        else if(a[mid]>a[l])
        {
             if(x>=a[l]&&x<a[mid])
              r=mid-1;
              else
              l=mid+1;


        }
        else
        {
           if(x>a[mid]&&x<=a[r])
           l=mid+1;
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
    long long test=1;
    cin >> test;
    while (test--)
    {
        cout<<"Testcase : "<<test+1<<endl;
        long long n;
        cin >> n;
        long long x;
        cin>>x;

        //  Input an array


         int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
           cout<<"Array is : "<<endl;
        parray(a,n);

     cout<<"Index of element "<<x<<" is : "<<    searchInARotatedArray(a,n,x);
        cout<<endl;

}
    return 0;
}