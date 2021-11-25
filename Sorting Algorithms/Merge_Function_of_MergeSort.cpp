#include <bits/stdc++.h>
using namespace std;
#define deb(leftArray) cout << #leftArray << "=" << leftArray << endl

void parray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

void mergeFunctionOfMergeSort(int a[], int n, int low, int mid, int high)
{

     int leftSize=mid-low+1,rightSize=high-mid;
    int leftArray[leftSize], rightArray[rightSize];

    for(int i=0;i<leftSize;i++)
    leftArray[i]=a[i+low];
    
    for(int i=0;i<rightSize;i++)
    rightArray[i]=a[i+mid+1];

    parray(a,n);
    parray(leftArray,leftSize);
    parray(rightArray,rightSize);
    
    int i =0, j =0, c = low;
    while (i <leftSize && j <rightSize)
    {

        if (leftArray[i] <= rightArray[j])
        {
            a[c] = leftArray[i];
            i++;
            c++;
        }
        else
        {
            a[c] = rightArray[j];
            j++;
            c++;
        }
    }

    while (i < leftSize)
    {
    
        
        a[c] = leftArray[i];
        i++, c++;

    }
    while (j <rightSize)
    {
        
        a[c] = rightArray[j];
        j++, c++;
    }
      cout<<"Array after merging : "<<endl;
        parray(a, n);
    
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
        int low, mid, high;
        cin >> low >> mid >> high;

        //  Input an array

        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        cout << "Array is : " << endl;
        parray(a, n);

      mergeFunctionOfMergeSort(a, n, low, mid, high);
        // cout<<endl;
    }
    return 0;
}