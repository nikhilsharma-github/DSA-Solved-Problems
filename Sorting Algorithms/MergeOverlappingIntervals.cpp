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
void pPair(pair<int,int> time[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<time[i].first<<" "<<time[i].second<<endl;
    }
    cout<<endl;
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

        pair<int,int> time[n];

        for(int i=0;i<n;i++)
        {
            cin>>time[i].first;
            cin>>time[i].second;
        }  

        cout<<" pairs are : "<<endl;
        pPair(time,n);


}
    return 0;
}