#include <iostream>
#include <algorithm>
using namespace std;

void parray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}


void merge(int arr[], int l, int m, int h)
{

    int n1 = m - l + 1, n2 = h - m;
    int left[n1], right[n2];

    for (int i = 0; i < n1; i++)
        left[i] = arr[i + l];

    for (int j = 0; j < n2; j++)
        right[j] = arr[m + 1 + j];

    int i = 0, j = 0, k = l;
    
    while (i < n1 && j < n2)
    {
        if (left[i] <= right[j])
            arr[k++] = left[i++];
        else
            arr[k++] = right[j++];
    }
    while (i < n1)
        arr[k++] = left[i++];
    while (j < n2)
        arr[k++] = right[j++];
}

void mergeSort(int arr[], int l, int r)
{
    if (r > l)
    {
        int m = l + (r - l) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;

        //  Input an array

        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        cout<<"array before sort : "<<endl;
        parray(a,n);
        int l=0,r=n-1;
        mergeSort(a, l, r);
        cout<<"Array after Merge Sort"<<endl;
        parray(a,n);
    }
}