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
void starPattern(int n)
{

    // int comp = n / 2;
    int spaces = n / 2;
    int stars = 1;
    for (int i = 1; i <= n; i++)
    {
                for (int j = 1; j <= spaces; j++)
                    cout << "\t";

                for (int j = 1; j <= stars; j++)
                    cout << "*\t";


            if (i <= n/2)
            {
                spaces--, stars+=2;
            }
            else
            {
                spaces++, stars-=2;
            }
        
        cout << endl;
    }
}

void starPattern2(int n)
{

    //    n is the number of rows here
    // numPrint variable will help to print number starting from 5 everytime

    // index i for loop for rows and j for columns

    //  when j<=i, print numPrint variable and decrement the number.

    int numPrint = n;
    for (int i = 1; i <= n; i++)
    {
        numPrint = n;
        for (int j = 1; j <= n; j++)
        {

            if (j <= i)
            {
                cout << numPrint;
                numPrint--;
            }
            else
            {

                cout << numPrint;
            }
        }
        cout << endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n;
    cin >> n;

    //  assuming value 5 here for you
    // n = 9;

    starPattern(n);
    // starPattern2(n);
    return 0;
}