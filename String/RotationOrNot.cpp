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

void rotateByOnePlace(string &s1)
{
    int i = 1, temp = s1[0];
    for (i = 1; i < s1.length(); i++)
    {
        s1[i - 1] = s1[i];
    }
    s1[i - 1] = temp;
}

bool rotation_NAIVE(string s1, string s2)
{
    int s1len = s1.length(), s2len = s2.length();

    for (int i = 0; i < s1len; i++)
    {
        rotateByOnePlace(s1);
        if (s1 == s2)
            return true;
    }
    return false;
}

bool rotation_EFFICIENT(string s1, string s2)
{

    if (s1.length() != s2.length())
        return false;
    else
    {
        if ((s1 + s1).find(s2) != string::npos)
            return true;
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
        cout << "Testcase : " << test + 1 << endl;
        string s1, s2;
        cin >> s1 >> s2;
        cout << " string s1 : " << s1 << endl;
        cout << " string s2 : " << s2 << endl;

        cout << " NAIVE ANSWER : " << endl;
        (rotation_NAIVE(s1, s2) ? cout << "ROTATIONS " : cout << "NOT ROTATIONS");

        cout << endl;
        cout << "EFFICIENT ANSWER : " << endl;
        (rotation_EFFICIENT(s1, s2) ? cout << "ROTATIONS " : cout << "NOT ROTATIONS");

        cout << endl;
    }
    return 0;
}