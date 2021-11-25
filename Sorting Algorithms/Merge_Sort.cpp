#include <bits/stdc++.h>
using namespace std;
#define deb(x) cout << #x << "=" << x << endl

void parray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}


void mergeArray(int arr[], int l, int m, int h)
{
     int n1=m-l+1,n2=h-m;
    int left[n1], right[n2];

    for(int i=0;i<n1;i++)
    left[i]=arr[i+l];
    
    for(int j=0;j<n2;j++)
    right[j]=arr[j+m+1];
   
    int i =0, j =0, k = l;
    while (i <n1 && j <n2)
    {
        if (left[i] <= right[j])
            arr[k++] = left[i++];
        else
            arr[k++] = right[j++];
       
    }

    while (i < n1)
        arr[k++] = left[i++];
    while (j <n2)
        arr[k++] = right[j++];
    //   cout<<"Array after merging : "<<endl;
    //     parray(arr, n);
    
}
void mergeSort(int arr[], int l, int h)
{
    
     if(l<h){

  
        int m=l+(h-l)/2;
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, h);
        mergeArray(arr, l, m, h);
     }
    
}

int main()
{
    long long test = 1;
    cin >> test;
    while (test--)
    {
         long long n;
        cin >> n;

        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        cout << "Array is : " << endl;
        parray(arr, n);
        int low=0,high=n-1;
        mergeSort(arr, low, high);
        cout << "Array after MERGE SORT IS : " << endl;
        parray(arr, n);

    }
    return 0;
}