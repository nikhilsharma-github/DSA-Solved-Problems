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

void pmatrix(int **a, int r, int c)
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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long test = 1;
    cin >> test;
    while (test--)
    {
        cout << "Testcase : " << test + 1 << endl;
        long long r, c;
        cin >> r >> c;

        int a[r][c];

        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                cin >> a[i][j];
            }
        }
        int shell,rot;
        cin>>shell>>rot;
       
       cout<<"matrix is : "<<endl;

       for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }         


          int sr=shell-1,sc=shell-1;
          int er=r-1-shell,ec=c-1-shell;
        //    shell shifting

         for(int h=1;h<=rot;h++)
         {

           int temp=a[sr][sc];
           for(int i=sr;i<=er-1;i++)
           {
             a[i][sc]=a[i+1][sc];
           }
           for(int i=er;i<=ec-1;i++)
           {
             a[er][i]=a[er][i+1];
           }
           for(int i=ec;i>=sc-1;i--)
           {
               a[ec][i]=a[ec][i-1];
           }
           for(int i=ec;i>=sc-1;i--)
           {
               a[sr][i]=a[sr][i+1];
           }

         }
    cout<<"rotated mat is : "<<endl;
for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }         
    }

    return 0;
}