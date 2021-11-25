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

bool anagramCheck(string &s1, string &s2, int c)
{
    // cout<<" string one is : "<<s1.substr(c,s2.length());
    // cout<<" string two is : "<<s2.substr(0,s2.length());

     int cf[256] = {0};
    //   cout<<endl;
      for (int i = 0; i < s2.length(); i++)
      {
        // cout<<s1[i+c]<<" ";
        // cout<<s2[i]<<" ";
        cf[s1[i+c]]++;
        cf[s2[i]]--;
    }
        // cout<<" frequency array is : "<<endl;
    // for (int i = 97; i < 123; i++)
    // {
    //      cout<<(char)i<<" "<<cf[i]<<endl;
    // }

    for (int i = 0; i < 256; i++)
    {
        
        if (cf[i] != 0)
            return false;
    }
    return true;
    // return false;
}

bool anagram_NAIVE(string s1, string s2)
{
    int s1l = s1.length(), s2l = s2.length();

    for (int i = 0; i <= s1l - s2l; i++)
    { 

        if (anagramCheck(s1, s2, i))
        {         
            return true;
        }
    }
    return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long test = 1;
    cin >> test;
    while (test--)
    {
        string s1, s2;
        cin >> s1 >> s2;

        cout << " string s1 : " << s1 << endl;
        cout << " string s2 : " << s2 << endl;

        cout << " NAIVE ANSWER : " << endl;
        (anagram_NAIVE(s1, s2) ? cout << "Anagram    " : cout << "NOT Anagram");
        cout<<endl;
    }
    return 0;
}