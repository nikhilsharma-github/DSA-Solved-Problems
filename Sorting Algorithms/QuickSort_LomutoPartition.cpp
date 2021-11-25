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
int Partition(int a[],int l,int h)
{
    int pivot=a[h];
    int i=l-1;
     
     for(int j=l;j<=h-1;j++)
     {
         if(a[j]<pivot)
         {
             i++;
             swap(a[i],a[j]);
         }
     }
     swap(a[i+1],a[h]);
     return i+1;

}

void QuickSort(int a[],int l,int h){

    if(l<h){
        int pivot=Partition(a,l,h);
        QuickSort(a,l,pivot-1);
        QuickSort(a,pivot+1,h);
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
         
         QuickSort(a,0,n-1);
         cout<<"Array after sorting using QUICKSORT LOMUTO is : "<<endl;
         parray(a,n);

}
    return 0;
}