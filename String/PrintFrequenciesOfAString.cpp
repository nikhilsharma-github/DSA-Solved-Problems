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

void printFreqHash(string s)
{
    cout<<s<<endl;
    map<char, int> m;
    for(int i=0;i<s.length();i++)
    {
        m[s[i]]++;
    }
    for(auto it:m)
    {
        cout<<it.first<<" "<<it.second<<endl;
    }

             
}
void printFreq(string s)
{
    cout<<s<<endl;
    int c[26]={0};
    for(int i=0;i<s.length();i++)
    {
        // c[s[i]-'a']++;
        int val= (int)s[i]-'a';
        c[val]++;
        // deb(i);

        //  deb(char(val));
        // deb(c[val]);
        
    }
    for(int i=0;i<26;i++)
    {
        if(c[i]>0)
        {
            cout<<(char)(i+'a')<<" "<<c[i]<<endl;
// cout<<char(i+'a')<<" "<<c[i]<<endl;
        }
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
        cout << "Testcase : " << test + 1 << endl;
        string s;
        cin >> s;
        printFreq(s);
        // printFreqHash(s);
    }
    return 0;
}