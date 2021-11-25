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

int binarysearch(int a[], int n, int x, int l, int r)
{
   if(l>r)
   return -1;

    int mid = (l + r) / 2;
    
    if(a[mid]==x)
    return mid+1;

    else if (x < a[mid])
        return binarysearch(a, n, x, l, mid-1);
    else 
        return binarysearch(a, n, x, mid+1, r);
          

   
}
int bsrfirstoccurence(int a[],int x,int l,int r){



    int mid=(l+r)/2;

    if((a[mid]==x)&&((a[mid-1]!=x)||mid==0))
    return mid+1;
   
    else if (x < a[mid]||(a[mid]==x&&a[mid-1]==x))
        return bsrfirstoccurence(a,  x, l, mid-1);
    else 
        return bsrfirstoccurence(a, x, mid+1, r);
    
          

}
int bsifirstoccurence(int a[],int x,int l,int r)
{

       while(l<=r)
       {
        int mid=(l+r)/2;

           if(a[mid]==x&&(mid==0||a[mid-1]!=x))
           return mid+1;
           else if(x<a[mid]||(a[mid]==x&&a[mid-1]==x))
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
    long long test = 1;
    cin >> test;
    while (test--)
    {
        cout << "Testcase : " << test + 1 << endl;
        long long n, x;
        cin >> n >> x;

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
        cout << "value to find : " << x << endl;

        // cout << "value is present at position : " << binarysearch(a, n, x, 0, n - 1) << endl;
        //     cout<<"Recursive solution"<<endl;
        //  cout<<"first occurence of element is : "<<bsrfirstoccurence(a,x,0,n-1)<<endl;
              
           cout<<"ITERATIVE solution : "<<endl;
         cout<<"first occurence of element is : "<<bsifirstoccurence(a,x,0,n-1)<<endl;
        
    }
    return 0;
}