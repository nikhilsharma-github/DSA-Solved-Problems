#include <bits/stdc++.h>
using namespace std;
#define deb(x) cout << #x << "=" << x << endl


int binarysearch(int [],int ,int,int );
void parray(int a[],int n){
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int searchforbounds(int x)
{
    int a[100];
    for(int i=0;i<100;i++)
    a[i]=(i+1);

    int ansindex=-1;
    if(a[0]==x)
    return 0;

    int i=1;

    while(a[i]<x)
    i=i*2;

    if(a[i]==x)
    return i;

    
     return binarysearch(a,x,i/2,i-1);

}

int binarysearch(int a[],int x,int l,int r)
{
   
   while(l<=r)
   {
       int mid=(l+r)/2;

       if(a[mid]==x)
       return mid;
       else if(x<a[mid])
       r=mid-1;
       else
       l=mid+1;
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

     cout<<"index of "<<n<<" is : "<<  searchforbounds(n);
}
    return 0;
}