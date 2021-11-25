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

void frequenciesUsingHashing(int a[], int n)
{
    unordered_map<int, int> m;

    // sort(m.begin(),m.end());
    for (int i = 0; i < n; i++)
    {
            m[a[i]]++;
        // if (m.find(a[i]) != m.end())
        // {
        //     m[a[i]]++;
        // }
        // else
        // {
        //     m[a[i]] = 1;
        // }
    }

    for (auto it : m)
        cout << it.first <<" "<<it.second<<endl;
}
void frequenciesUsingArray(int a[], int n)
{

    for (int i = 0; i < n; i++)
    {
        // cout<<"i is at index : "<<i<<endl;
        // cout<<"value at index "<<i<<" is : "<<a[i]<<endl;
        bool flag = false;
        // cout<<"going in J's loop now "<<endl;
        for (int j = 0; j < i; j++)
        {
            // cout<<"j is at index : "<<j<<endl;
            // cout<<"value at index "<<j<<" is : "<<a[j]<<endl;
            if (a[i] == a[j])
            {
                // cout<<a[i]<<" == "<<a[j]<<endl;
                flag = true;
                break;
            }
        }
        // cout<<"value of bool : "<<flag<<endl;

        if (flag == true)
            continue;

        int count = 0;
        // cout<<"going in K's loop which will count frequency "<<endl;
        for (int k = i; k < n; k++)
        {
            // cout<<"k is at index : "<<k<<endl;
            // cout<<"value at index "<<k<<" is : "<<a[k]<<endl;
            // cout<<"count : "<<count<<endl;
            if (a[k] == a[i])
            {
                // cout<<a[i]<<" == "<<a[k]<<" so count increments"<<endl;
                count++;
            }
        }
        cout << "frequency of element " << a[i] << " is : " << count << endl;
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
        long long n;
        cin >> n;

        //  Input an array

        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        cout << "Array is : " << endl;
        parray(a, n);
        // frequenciesUsingArray(a, n);
         frequenciesUsingHashing(a,n);
    }
    return 0;
}