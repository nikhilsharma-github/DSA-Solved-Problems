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

void hoare_Partition(int a[],int l,int h){
    int p=a[0];
    int i=l-1,j=h+1;
    while(true){

        do{
            i++;
        }while(a[i]<p);
        do{
            j--;
        }while(a[j]>p);

        if(i>=j)
        break;

        swap(a[i],a[j]);
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
        long long n, p;
        cin >> n >> p;

        //  Input an array

        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        cout << "Array is : " << endl;
        parray(a, n);
        

        // HOARE PARTITION
        hoare_Partition(a,0,n-1);
        cout << "Array after LOMUTO partition : " << endl;
        parray(a, n);
    }
    return 0;
}