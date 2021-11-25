// USER INPUT: 

/*
1
7
3 -8 11 69 -78 -25 100
8
11 21 44 50 81 7 6 
10
1 1 0 0 1 0 1 1 0 1 


*/



#include <bits/stdc++.h>
using namespace std;
#define deb(x) cout << #x << "=" << x << endl

void parray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
void pbool(bool a[],int n){
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
void positiveAndNegative(int a[], int n)
{
    int i = -1, j = n;
    while (true)
    {
        do
        {
            i++;
        } while (a[i] < 0);
        do
        {
            j--;
        } while (a[j] >= 0);
        if (i >= j)
            break;

        swap(a[i], a[j]);
    }
}

void evenAndOdd(int eo[],int n2){
    int i=-1,j=n2;
    
    while(true){
        do{
            i++;
        }while(eo[i]%2!=0);
        
        do{
            j--;
        }while(eo[j]%2==0);

        if(i>=j)
        break;

        swap(eo[i],eo[j]);

    }
}
void binaryValues(bool ba[],int n3){

    int i=-1,j=n3;
    
    while(true){
        do{
            i++;
        }while(ba[i]==0);
        
        do{
            j--;
        }while(ba[j]==1);

        if(i>=j)
        break;

        swap(ba[i],ba[j]);

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
        long long n1, n2, n3;
        // size of first array is n1 
        cin >> n1;

        // Array for positive and negative values
        int pn[n1];
        for (int i = 0; i < n1; i++)
        {
            cin >> pn[i];
        }

        // Array for even and odd values
        cin >> n2;
        int eo[n2];
        for (int i = 0; i < n2; i++)
        {
            cin >> eo[i];
        }

        // Array for binary values

        cin >> n3;
        cout<<" debugging statement, it will be executed first, WHY??"<<endl;
        // ALSO, BINARY ARRAY IS NOT TAKING ANY INPUT
        bool ba[n3];

        for (int i = 0; i < n3; i++)
        {
            cin >> ba[i];
        }

         cout<<"given array for +ve and -ve values : "<<endl;
         parray(pn,n1);
        positiveAndNegative(pn, n1);
        cout<<" array positive negative after sorting : "<<endl;
        parray(pn,n1);
         cout<<"given array for even and odd values : "<<endl;
         parray(eo,n2);
        evenAndOdd(eo, n2);
        cout<<" array even odd after sorting : "<<endl;
        parray(eo,n2);
         cout<<"given array for binary values : "<<endl;
         pbool(ba,n3);
        binaryValues(ba, n3);
        cout<<" array binary after sorting : "<<endl;
        pbool(ba,n3);
    }
    return 0;
}