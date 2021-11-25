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



void partition(int arr[], int l, int h, int p)
{
    int temp[h-l+1],index=0;
    for(int i=l;i<=h;i++)
        if(arr[i]<=arr[p] && i != p)
            {
                temp[index]=arr[i];index++;
            }
    temp[index++] = arr[p];
    for(int i=l;i<=h;i++)
        if(arr[i]>arr[p])
            {
                temp[index]=arr[i];index++;
            }
    for(int i=l;i<=h;i++)
        arr[i]=temp[i-l];
}

void naive_Partition(int a[], int start, int end, int pivot)
{

    int temp[end - start + 1] = {0};
    int index = 0;
  
    for (int i = start; i < end; i++)
    {

     
     
        if (a[i] <= a[pivot] && i != pivot)
        {
            temp[index] = a[i];
            index++;
        }
        temp[index++] = a[pivot];
    
    }
    
    for (int i = start; i < end; i++)
    {
    
        if (a[i] > a[pivot])
        {
            temp[index] = a[i];
            index++;
        }
    }
    for (int i = start; i < end; i++)
    {
        a[i] = temp[i - start];
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
        

        // naive_Partition(a, 0, n, p);
        partition(a,0,n-1,3);
        cout << "Array after naive partition : " << endl;
        parray(a, n);
    }
    return 0;
}