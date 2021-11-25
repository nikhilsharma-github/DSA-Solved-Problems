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

bool checkSubsequence(string s, string sub)
{
    int len = s.length();
    int sublen = sub.length();
    int i = 0, j = 0;

    while (i < len && j < sublen)
    {
        if (sub[j] != s[i])
            i++;
        else
            j++;
    }

    if (j == sublen)
        return true;
    else
        return false;
}

bool checkSubsequenceRecursive(string s, string sub, int l1, int l2)
{
    deb(l1);
    deb(l2);
    if (l2 == 0)
    {
      cout<<" sub string is empty now "<<endl;

        return true;
    }
    if (l1 == 0)
    {
      cout<<" main string is empty now "<<endl;
        return false;
    }

    if (s[l1 - 1] == sub[l2 - 1])
    {
        return checkSubsequenceRecursive(s, sub, l1-1, l2-1);
    }
    else
        return checkSubsequenceRecursive(s, sub, l1-1, l2);
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
        string s1;
        cin >> s;
        cin >> s1;
        // getline(cin, s1);
        cout << "full string : " << endl;

        cout << s << endl;
        cout << "sub string : " << endl;
        cout << s1 << endl;
        cout << "boolean value is : ";
        // cout << checkSubsequence(s, s1) << endl;
        cout << checkSubsequenceRecursive(s, s1, s.length() - 1, s1.length() - 1) << endl;
    }
    return 0;
}