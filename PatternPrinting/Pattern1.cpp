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
void pattern6(int n)
{

    int star = (n / 2) + 1;
    int space = 1;

    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= star; j++)
        {
            cout << "*";
        }
        for (int j = 1; j <= space; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= star; j++)
        {
            cout << "*";
        }

        if (i <= n / 2)
        {
            star--;
            space += 2;
        }
        else
        {
            star++;
            space -= 2;
        }

        cout << endl;
    }
}

void pattern7(int n)
{

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == j)
            {
                cout << "*";
                // System.out.print("*\t");
            }
            else
            {
                cout << " ";
                // System.out.print("\t");
            }
        }
        cout << endl;
        // System.out.println("");
    }
}
void pattern8(int n)
{

    for (int i = n; i >= 0; i--)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == j)
            {
                cout << "*";
                // System.out.print("*\t");
            }
            else
            {
                cout << " ";
                // System.out.print("\t");
            }
        }
        cout << endl;
        // System.out.println("");
    }
}

void pattern9(int n)
{

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)

        {
            if (i == j || (i + j == n + 1))
                cout << "*";
            // System.out.print("*\t");
            else
                cout << " ";
            // System.out.print("\t");
        }
        cout << endl;
        // System.out.println("");
    }
}

void pattern10(int n)
{

    //  APPROACH 1

    /*
    int star = (n / 2);
    int space = 1;

    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= star; j++)
        {
            cout << " ";
            // System.out.print("\t");
        }
        for (int j = 1; j <= space; j++)
        {
            if (j == 1 || j == space)
            {

                cout << "*";
                // System.out.print("*\t");
            }
            else
            {

                // System.out.print("\t");
                cout << " ";
            }
        }
        for (int j = 1; j <= star; j++)
        {
            // System.out.print("\t");
            cout << " ";
        }

        if (i <= n / 2)
        {
            star--;
            space += 2;
        }
        else
        {
            star++;
            space -= 2;
        }

        // System.out.println("");
        cout << endl;
    }

     */

    //  APPROACH 2
    int innerSpace = -1, outerSpace = n / 2;
    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= outerSpace; j++)
        {
            cout << " ";
            // System.out.print("\t");
        }

        cout << "*";
        // System.out.print("*");

        for (int j = 1; j <= innerSpace; j++)
        {
            cout << " ";
            // System.out.print("\t");
        }

        if (i >= 2 && i <= n - 1)
            cout << "*";
        // System.out.print("*");

        if (i <= n / 2)
        {
            innerSpace += 2;
            outerSpace--;
        }
        else
        {
            innerSpace -= 2;
            outerSpace++;
        }

        cout << endl;
        // System.out.println("");
    }
}

void pattern11(int n)
{

    int digit = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {

            if (j <= i)
            {

                cout << digit << "\t";
                // System.out.print(digit+"\t");

                digit++;
            }
        }
        // System.out.println("");
        cout << endl;
    }
}

void pattern12(int n)
{

    int digit = 1, prevdigit = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {

            if (j <= i)
            {
                // System.out.print(digit+"\t");

                cout << prevdigit << " ";

                int c = prevdigit + digit;
                prevdigit = digit;
                digit = c;
            }
        }
        // System.out.println("");
        cout << endl;
    }
}
long long fact(int n)
{

    if (n == 1)
        return 1;

    return n * fact(n - 1);
}

void pattern13(int n)
{

    // for(int i=0;i<n;i++)
    // {
    //     for(int j=0;j<=i;j++)
    //     {

    //     }
    //     cout<<endl;
    // }

    int val = 1, pre = 1;
    for (int i = 0; i < n; i++)
    {
        int val = 1;
        for (int j = 0; j <= i; j++)
        {
            cout << val << " ";
            int pre = val * (i - j) / (j + 1);
            val = pre;
        }
        cout << endl;
    }
}
void pattern15(int n)
{

    int spaces = n / 2;
    int numbers = 1;
    int val = 1;
    for (int i = 1; i <= n; i++)
    {

        if (i <= n / 2)
            val = i;
        else
            val = n + 1 - i;

        for (int k = 1; k <= spaces; k++)
        {
            cout << " ";
        }

        for (int j = 1; j <= numbers; j++)
        {

            cout << val;
            if (j <= numbers / 2)
            {
                val++;
            }
            else
            {
                val--;
            }
        }

        if (i <= n / 2)
        {
            spaces--;
            numbers += 2;
        }
        else
        {

            spaces++;
            numbers -= 2;
        }

        cout << endl;
    }
}

void pattern16(int n)
{

    //  int low=

    for (int i = 1; i <= n; i++)
    {
        int val = 1;
        for (int j = 1; j <= n * 2 - 1; j++)
        {

            if (j < n * 2 - i && j > i)
            {
                cout << " ";
            }
            else
            {
                cout << val;
            }
            if (j <= (n * 2 - 1) / 2)
                val++;
            else
                val--;
        }

        cout << endl;
    }
}
void pattern17(int n)
{

    int spaces = n / 2;
    int stars = 1;
    for (int i = 1; i <= n; i++)
    {

        for (int k = 1; k <= spaces; k++)
        {

            if (i == n / 2 + 1)
            {
                cout << "*";
            }
            else
                cout << " ";
        }

        for (int i = 1; i <= stars; i++)
            cout << "*";

        if (i <= n / 2)
            stars++;
        else
            stars--;

        cout << endl;
    }
}

void pattern18(int n)
{

    int spaces = n / 2;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)

        {

            if (i <= n / 2)
            {

                if (j >= i && (i + j <= n + 1))
                {

                    if (j > i && i + j < n + 1 && i > 1 && i <= n / 2)
                        cout << " ";
                    else
                        cout << "*";
                }
                else
                    cout << " ";
            }
            else
            {

                if (j > n - i && (j <= i))
                    cout << "*";
                else
                    cout << " ";
            }
        }
        cout << endl;
        // System.out.println("");
    }
}
void pattern19(int n)
{

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {

            if (!(j > n / 2 && j <= n) && i == 1)
                cout << "*";
            else if ((j > n / 2 && j <= n) && i == n)
                cout << "*";
                else if((j==1&&i>n/2)||(j==n&&i<=n/2))
                cout<<"*";

            else if (i == n / 2 + 1)
                cout << "*";

            else if (j == n / 2 + 1)
                cout << "*";

            else
                cout << " ";
        }
        cout << endl;
    }
}

void pattern20(int n){
    
    for(int i=1;i<=n;i++)B
    {
        for(int j=1;j<=n;j++)
        {
            if((j==1||j==n))
            cout<<"*";
            else if(i==j&&i>n/2)
            cout<<"*";
            else if(i+j==n+1&&i>n/2)
            cout<<"*";
            else
            cout<<" ";
        }

        cout<<endl;
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
        cout << "value of n : " << n << endl;
        // pattern6(n);
        // pattern7(n);
        // pattern8(n);
        // pattern9(n);
        // pattern10(n);
        // pattern11(n);
        // pattern12(n);
        // pattern13(n);
        // pattern14 was easy
        // pattern15(n);
        // pattern16(n);
        // pattern17(n);
        // pattern18(n);
        // pattern19(n);
        pattern20(n);
    }
    return 0;
}