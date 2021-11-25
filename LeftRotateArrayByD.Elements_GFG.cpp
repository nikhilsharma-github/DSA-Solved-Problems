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

void swap(int &x,int &y){
     
     int temp=x;
     x=y;
     y=temp;

}
 
 void swapp(int a[],int n,int s,int e){

       while(s<e){
           swap(a[s],a[e]);
           s++,e--;
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
        cout<<"Testcase : "<<test+1<<endl;
        long long n,d;
        cin >> n>>d;
        cout<<"size : "<<n<<" d: "<<d<<endl;
           
        //  Input an array

        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        // parray(a,n);
        // cout<<"  Solution of O(n^2) time complexity"<<endl;
      

        // for (int i = 1; i <= d; i++)
        // {
        // int temp = a[0];

        //     for (int i = 1; i < n; i++)
        //     {
        //         a[i - 1] = a[i];
        //     }
        //     a[n - 1] = temp;
        // }
        //   cout<<"solution using auxillary array "<<endl;
        //   cout<<"Given array is : "<<endl;
        //   parray(a,n);

        //   int t[d%n];
        //   for(int i=0;i<(d%n);i++)
        //   { 
        //       t[i]=a[i];
        //   }
        //   cout<<"array a is : "<<endl;
        //   parray(a,n);
        //   cout<<"array t is : "<<endl;
        //   parray(t,d);
          
        //   for(int i=d%n;i<n;i++)
        //   {
        //       a[i-d%n]=a[i];
        //   }
        //   cout<<"array a is : "<<endl;
        //   parray(a,n);
        //   cout<<"array t is : "<<endl;
        //   parray(t,d);
          
        //   for(int i=0;i<d;i++)
        //   {
        //       a[n-d+i]=t[i];
        //   }
          cout<<"given array a is : "<<endl;
          parray(a,n);
        cout << "after left rotate by "<<d<<  " elements" << endl;
        //   cout<<"array t is : "<<endl;
        //   parray(t,d);

        // cout<<"Best efficinet solution "<<endl;

         swapp(a,n,0,d-1);
         swapp(a,n,d,n-1);
         swapp(a,n,0,n-1);
 cout<<"final shift : "<<endl;
         parray(a,n);

          
          

    }


    return 0;
}