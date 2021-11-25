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
void reverseWord(string &s,int i,int j)
{
    cout<<" word before reversee "<<s<<endl;
    while (i <= j)
    {
        char c = s[i];
        s[i] = s[j];
        s[j] = c;
        i++, j--;
    }
    cout<<" word after reversee "<<s<<endl;
}
void reverseWordsUsingStack(string s)
{
    // cout << "hello";
    stack<string> st;
    int i, l = s.length() - 1;
    int c = 0;
    string temp = "";
    for (i = 0; i <= l; i++)
    {
        // cout << s[i] << endl;
        if (s[i] == ' ')
        {
            st.push(temp);
            // cout << temp << endl;
            temp = "";
        }
        else
            temp = temp + s[i];
    }
    st.push(temp);
    cout << "stack ans is : " << endl;
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
}
void reverseWordsUsingreverseEveryWord(string s)
{
    int l = s.length() - 1;

    int start = 0;
    for (int i = 0; i <= l; i++)
    {
        deb(start);
        deb(i);
        if (s[i] == ' ')
        {
            reverseWord(s, start, i - 1);
            start = i + 1;
        }
    }
    reverseWord(s, start, l);
    cout << "string after reversing words only : " << endl;
    cout << s << endl;

    reverseWord(s,0,l);
            cout<< "reversed string is : " << endl;
    cout << s << endl;
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
        cin.ignore();
        getline(cin, s);
        // cin>>s;
        cout << "string is : " << s << endl;
        // reverseWordsUsingStack(s);
        reverseWordsUsingreverseEveryWord(s);
    }
    return 0;
}