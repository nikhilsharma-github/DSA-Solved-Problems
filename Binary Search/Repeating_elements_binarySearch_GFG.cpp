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


int repeatingElements(int a[],int n){

   bool store[n-2]={false};

   for(int i=0;i<n;i++){

       
           if(store[a[i]]==true)
           {
                return a[i];
           }
           store[a[i]]=true;

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


        //  Input an array


         int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
           cout<<"Array is : "<<endl;
        parray(a,n);

         cout<<"Repeating Element is : "<<repeatingElements(a,n)<<endl;
        // cout<<endl;
}
    return 0;
}