#include <bits/stdc++.h>
#include <cstring>
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

bool leftmostNonRepeatingCharacterNaive(string s1)
{
    bool check = true;
    for (int i = 0; i < s1.length(); i++)
    {
        for (int j =0; j < s1.length(); j++)
        {
            check = true;
            if (s1[j] == s1[i]&&i!=j)
            {
                check = false;
                break;
            }
        }
        if (check == true)
        {
            cout << s1[i] << " is the leftmost NonRepeating  at " << i << endl;
            return true;
        }
    }
    cout << "no Non Repeating element" << endl;
    return false;
}
bool leftmostNonRepeatingCharacterBetter(string s)
{

    int freqChar[256] = {0};
    int l = s.length();

    for (int i = 0; i < l; i++)
        freqChar[s[i]]++;

    // cout << "frequencies are " << endl;
    // for (int i = 97; i <= 122; i++)
    // {
    //     cout << (char)i << " " << freqChar[i] << endl;
    // }

    for (int i = 0; i < l; i++)
        if (freqChar[s[i]]==1)
        {

            cout << s[i] << " is the leftmost NonRepeating  at " << i << endl;
            return true;
        }

    cout << "no NonRepeating element" << endl;
    return false;
}
bool leftmostNonRepeatingCharacterBetter2(string s)
{
    int freqChar[256] = {0};
    int len = s.length();
    int res = -1;
    for (int i = len - 1; i >= 0; i--)
    {
        if (freqChar[s[i]] == 1)
        {
           res=-1; 
        }
        else
        {
            freqChar[s[i]]++;
            res = i;

        }
    }
    if (res == -1)
    {

        cout << "no NonRepeating element" << endl;
        return false;
    }
    else
    {

        cout << s[res] << " is the leftmost NonRepeating  at " << res << endl;
        return true;
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
        string s1, s2;
        cin >> s1;

        cout << " string is : " << s1 << endl;
        cout << leftmostNonRepeatingCharacterNaive(s1) << endl;
        cout << leftmostNonRepeatingCharacterBetter(s1) << endl;
        cout << leftmostNonRepeatingCharacterBetter2(s1) << endl;
    }
    return 0;
}