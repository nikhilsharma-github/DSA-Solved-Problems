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
void parray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

int LongestProperPrefixSuffix

int KMPalgo(string s){
    int len=s.length();
    int LPS[len];
    for(int i=1;i<=len;i++)
    LPS[i-1]=LongestProperPrefixSuffix(s,i);


 cout<<"LPS array of string "<<s<<" is : "<<endl;
    parray(LPS,len);
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long test = 1;
    cin >> test;
    while (test--)
    {
        string s;
        cin >> s;
        cout << "String is : " << s << endl;
        KMPalgo(s);
    }
    return 0;
}