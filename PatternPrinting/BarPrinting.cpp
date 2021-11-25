#include <bits/stdc++.h>
using namespace std;
#define deb(x) cout << #x << "=" << x << endl

struct node
{
    int data;
    struct node *next;
    // struct node *prev;
    node(int value)
    {
        data = value;
        next = NULL;
        // prev=NULL;
    }
};
void plist(node *temp)
{
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int listSize(struct node *head)
{
    int size = 0;
    struct node *sizeptr = head;
    while (sizeptr != NULL)
    {
        size++;
        sizeptr = sizeptr->next;
    }
    return size;
}

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

void barPrinting(int *a, int n)
{

    int maxBar = INT_MIN, minBar = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        maxBar = max(maxBar, a[i]);
        minBar = max(minBar, a[i]);
    }

    for (int i = maxBar-1; i >= 0; i--)
    {

        for (int j = 1; j <= n; j++)
        {

            if (i < a[j - 1])
            {

                cout << "*  ";
            }
            else
                cout << "   ";
        }
        cout << endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long test = 1;
    cout << "Testcase : " << test + 1 << endl;
    long long n;
    cin >> n;

    //  Input an array

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    barPrinting(a, n);

    return 0;
}