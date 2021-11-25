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
bool anagramNaive(string s1, string s2)
{
    cout << "Naive approach ans : " << endl;
    if (s1.length() != s2.length())
        return false;

    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    if (s1 == s2)
        return true;
    else
        return false;
}
bool anagramEfficient(string s1, string s2)
{
    cout << "Efficient approach ans : " << endl;
    int freqChar[256] = {0};
    if(s1.length()!=s2.length())
    return false;

    for (int i = 0; i < s1.length(); i++)
    {
        freqChar[(int)s1[i] - 98]++;
        freqChar[(int)s2[i] - 98]--;
    }

    for (int i = 0; i < 256; i++)
    {
        if (freqChar[i] != 0)
            return false;
    }
    return true;
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
        string s1, s2;
        cin >> s1 >> s2;

        cout << anagramNaive(s1, s2) << endl;
        cout << anagramEfficient(s1, s2) << endl;
    }
    return 0;
}