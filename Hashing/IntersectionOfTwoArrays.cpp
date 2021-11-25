#include <bits/stdc++.h>
using namespace std;
#define deb(x) cout << #x << "=" << x << endl


void pmatrix(vector<vector<int>> a, int r, int c)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}
void parray(int a[],int n){
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

void intersectionUsingArrays(int a[],int b[],int n,int m){
 
    for(int i=0;i<n;i++)
    {
        bool flag=true;
        for(int j=0;j<i;j++)
        {
            if(a[i]==a[j])
            {
                flag=false;
                break;
            }
        }
        if( flag==false)
        continue;
      
        for(int j=0;j<m;j++)
        {
            if(a[i]==b[j])
            {
                cout<<a[i]<<endl;
                break;
            }
        }
    }

}

void intersectionUsingHashing(int a[],int b[],int n,int m)
{

    cout<<"intersections are : "<<endl;
    unordered_set<int> s(a,a+n);
   
    // for(int i=0;i<m;i++)
    // s.insert(b[i]);

    for(auto it: s)
    cout<<it<<" ";
    cout<<endl;

    for(int i=0;i<m;i++)
    {
        if(s.find(b[i])!=s.end())
        {
            cout<<b[i]<<endl;
            s.erase(b[i]);
        }
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
        long long n,m;
        cin >> n>>m;

        //  Input an array

         int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
           cout<<"Array 1 is : "<<endl;
        parray(a,n);
         int b[n];
        for(int i=0;i<m;i++){
            cin>>b[i];
        }
           cout<<"Array 2 is : "<<endl;
        parray(b,m);
        // intersectionUsingArrays(a,b,n,m);
        intersectionUsingHashing(a,b,n,m);

}
    return 0;
}