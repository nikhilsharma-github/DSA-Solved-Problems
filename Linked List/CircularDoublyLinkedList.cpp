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

        //  int a[n];
        // for(int i=0;i<n;i++){
        //     cin>>a[i];
        // }
        //    cout<<"Array is : "<<endl;
        // parray(a,n);


}
    return 0;
}