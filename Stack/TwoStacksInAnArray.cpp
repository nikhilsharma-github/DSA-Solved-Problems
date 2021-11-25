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
void twoStacks(int size=10)
{
    int stack[size]={-1};
    int s1 = 0, s2 = size - 1, sval;
    string sname ; //s1 and s2
    while (true)
    {
        cout<<"Working while true loop "<<endl;
        // sval=svalue();
        // sname=stackname();
        cout<<"Enter value and sname "<<endl;
        cin>>sval>>sname;
        if (sname == "s1")
        {
            if(s1<s2)
            {
                stack[s1]=sval;
                s1++;
            }
            else
            {
                cout<<"Stack 1 overflow over stack 2 "<<endl;
                break;
            }
        }
        else if (sname == "s2")
        {
            if(s1<s2)
            {
                stack[s2]=sval;
                s2--;
            }
            else
            {
                cout<<"Stack 2 overflow over stack 1 "<<endl;
                break;
            }
        }
        
        cout<<"Stack is : "<<endl;
        parray(stack,size);


    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long test = 1;
   
        cout << "Testcase : " << test + 1 << endl;
        cout<<"implementing two stacks"<<endl;
        twoStacks();
    return 0;
}