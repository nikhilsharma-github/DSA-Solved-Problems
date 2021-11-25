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

int squareroot(int n){

    int l=1,r=n,mid=0;
        while(l<=r)
        {
            mid=(l+r)/2;
           int midsquare=(mid*mid);
           int midsquare_1=((mid+1)*(mid+1));


           if((midsquare<=n)&&(midsquare_1>n))
           return mid;

           else if(midsquare<n)
           l=mid+1;
           else
           r=mid-1;

        }

        return mid;
     
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


        //  int a[100];
        // for(int i=0;i<100;i++){
        //     a[i]=(i+1);
        //     // cout<<i+1<<endl;
        // }
          cout<<"Actual sqrt of "<<n<<" is : "<<sqrt(n)<<endl;
         cout<<"Square root of "<<n<<" is : "<<squareroot(n)<<endl;

        cout<<endl;
}
    return 0;
}