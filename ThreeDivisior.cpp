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

bool isThree(int n)
{

    if (n == 1 || n == 2 || n == 3)
        return false;
    else
    {

        float root = sqrt(n);

        if (floor(root) != root){
        //    cout<<"root : "<<root<<"!=  "<<floor(root)<<endl;
            return false;
        }
        else
        {

            if (root * root != n)
            {
                // cout<<"root *root : "<<root*root<<"!=  "<<n<<endl;
                return false;
            }
            else
            {
                // cout<<"finding prime of root : "<<root<<endl;
                for (int i = 2; i  <=root/2; i++)
                {
                    if ((int)root % i == 0)
                        return false;
                }
                return true;
            }
        }
    }
};

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
        cout<<"number is : "<<n<<endl;

        cout << "ans is ; " << endl;
        cout << isThree(n) << endl;
    }
    return 0;
}