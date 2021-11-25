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

void maxSubarraySum(int a[],int n){

     int max_so_far=a[0];
     int current_max=a[0];
    int start=0,end=0,s=0;
     for(int i=1;i<n;i++)
     {
         if(a[i]>current_max+a[i])
         {
             current_max=a[i];
             s=i;
         }
         else{
             current_max=current_max+a[i];
         }
         
         if(current_max>max_so_far)
         {
             max_so_far=current_max;
             start=s;
             end=i;
         }
     }

     cout<<"Maximum sum is : "<<max_so_far<<endl;
     cout<<"Sum is from index : "<<start<<" to "<<end<<endl;

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

        cout<<"Maximum Subarray sum is : "<<endl;
        maxSubarraySum(a,n);
}
    return 0;
}