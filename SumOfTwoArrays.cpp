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

void sumOfTwoArray(int []a1,int []a2,int n1,int n2){

    int bigSize= max(a1l,a2l);

    


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
        long long n1;
        cin >> n1;

        //  Input an array

        int a1[n1];
        for (int i = 0; i < n1; i++)
        {
            cin >> a1[i];
        }
        cout << "Array 1 is : " << endl;
        parray(a1, n1);

        long long n2;
        cin >> n2;
        int a2[n2];
        for (int i = 0; i < n2; i++)
        {
            cin >> a2[i];
        }
        cout << "Array 1 is : " << endl;
        parray(a2, n2);


        sumOfTwoArray(a1,a2,n1,n2);
    }
    return 0;
}