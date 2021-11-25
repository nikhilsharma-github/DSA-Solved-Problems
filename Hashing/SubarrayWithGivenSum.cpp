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

bool subarrayWithGivenSum(int a[], int n,int givenSum)
{
    
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum = sum + a[j];
            if (sum == givenSum)
            {
                return true;
            }
        }
    }
    return false;
}

bool subarrayWithGivenSumHashing(int a[], int n,int givenSum)
{
    unordered_set<int> m;
    int currentsum = 0;
    for (int i = 0; i < n; i++)
    {
        currentsum = currentsum + a[i];
        if (m.find(givenSum-currentsum)!=m.end())
            return true;
        if(currentsum==givenSum)
        return true;
        else
            m.insert(currentsum);
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
        long long n, sum,givenSum;

        cin >> n>>givenSum;

        //  Input an array

        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        cout << "Array is : " << endl;
        parray(a, n);
        bool ans = subarrayWithGivenSum(a, n,givenSum);
        // bool ans = subarrayWithGivenSumHashing(a, n,givenSum);

        if (ans)
        {
            cout << " subarray exists " << endl;
        }
        else
            cout << "no subarray exists " << endl;
    }
    return 0;
}