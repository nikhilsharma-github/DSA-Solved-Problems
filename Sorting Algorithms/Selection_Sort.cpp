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

void swap( int &a,int &b)
{
    int temp=a;
    a=b;
    b=temp;
}

void selection_sort(int a[],int n){

      for(int i=0;i<=n-1;i++)
      {
            int minIndex=i;
          for(int j=i+1;j<=n-1;j++)
          {
            if(a[j]<a[minIndex])
            {
             minIndex=j;
            }
          }
          
          swap(a[minIndex],a[i]);
      }

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


        //  Input an array


         int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
           cout<<"Array is : "<<endl;
        parray(a,n);
        cout<<endl;
         
        selection_sort(a,n);
        cout<<"Array after sorting using SELECTION SORT : "<<endl;
        parray(a,n);
}
    return 0;
}