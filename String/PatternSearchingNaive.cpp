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

void naivePatternSearching(string text, string pattern)
{
    bool flag = true;
    int i = 0;

    int textLen = text.length(), patternLen = pattern.length();
    // cout << "length of text : " << endl;
    // cout << textLen << endl;
    // cout << "length of pattern : " << endl;
    // cout << patternLen << endl;

    for (i = 0; i <= textLen - patternLen; i++)
    {
        flag = true;
        int j = 0;
        for (j = 0; j < patternLen; j++)
        {
            if (text[i + j] != pattern[j])
                break;
        }
        if (j == patternLen)
            cout << i << " ";
    }
}

void improvedNaivePatternSearching(string text, string pattern)
{
    int tl = text.length(), pl = pattern.length();

    for (int i = 0; i <= tl - pl;)
    {
        int j = 0;
        for (j = 0; j < pl; j++)
        {
            if (text[i + j] != pattern[j])
                break;
        }

        if (j == pl)
            cout << i << " ";
        if (j == 0)
            i++;
        else
            i = i + j;
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
        string text, pattern;
        cin >> text >> pattern;

        cout << "text: " << text << endl;
        cout << "pattern : " << pattern << endl;
        // naivePatternSearching(text, pattern);
        improvedNaivePatternSearching(text, pattern);
    }
    return 0;
}