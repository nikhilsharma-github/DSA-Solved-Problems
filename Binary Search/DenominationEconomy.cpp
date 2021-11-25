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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

        int n;
        cin >> n;

        int *a = new int[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

    int t = 0;
    cin >> t;
    while (t--)
    {
        int data;
        cin >> data;

        // cout<<" data to find : "<<data<<endl;
        int cvalue = -1, fvalue = -1;
        int mid=0,low = 0, high = n - 1;

        while (low <= high)
        {
            // mid = (low + high) / 2;
            //  cout<<"low : "<<low<<endl;
            //  cout<<"high : "<<high<<endl;
            //  cout<<"a[low] : "<<a[low]<<endl;
            //  cout<<"a[high] : "<<a[high]<<endl;
            //  cout<<"mid : "<<mid<<endl;
            //  cout<<"a[mid] :"<<a[mid]<<endl;
            if (a[mid] == data)
            {
            //    cout<<"value "<<data<<" is present "<<endl;
                cvalue = a[mid];
                fvalue = a[mid];
                break;
            }
            else if (data < a[mid])
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        
        if (a[mid] != data)
        {
            // cout<<" value is not present "<<endl;

            if(mid==0)
            {
                fvalue=a[mid];
                cvalue=a[mid];
            }
           else if(mid==n-1){
                fvalue=a[mid-1];
                cvalue=a[mid-1];

            }
            else{
            fvalue=a[high];
             cvalue=a[low];

            }

        }

        // cout<<"floor : "<<fvalue<<"    ciel : "<<cvalue<<endl;
    }
    return 0;
}