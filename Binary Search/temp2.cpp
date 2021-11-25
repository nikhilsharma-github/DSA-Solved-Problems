#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int *a = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int data;
    cin >> data;

    // write your code here

    int low = 0, high = n - 1;
    int lowerbound = -1, upperbound = -1;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        cout << "low : " << low << endl;
        cout << "high : " << high << endl;
        cout << "a[low] : " << a[low] << endl;
        cout << "a[high] : " << a[high] << endl;
        cout << "mid : " << mid << endl;
        cout << "a[mid] :" << a[mid] << endl;

        if (data < a[mid] || a[mid] == a[mid - 1])
        {
            high = mid - 1;
        }
        else if (a[mid] == data)
        {

            lowerbound = mid;
            break;
        }
        else
        {
            low = mid + 1;
        }
    }
    low = 0, high = n - 1;
    while (low <= high)
    {

        int mid = (low + high) / 2;
        cout << "low : " << low << endl;
        cout << "high : " << high << endl;
        cout << "a[low] : " << a[low] << endl;
        cout << "a[high] : " << a[high] << endl;
        cout << "mid : " << mid << endl;
        cout << "a[mid] :" << a[mid] << endl;

        if (data > a[mid])
        {
            low = mid + 1;
        }
        else if (a[mid] == data)
        {
            upperbound = mid;

            if (mid == 0 && mid == n - 1)
            {
                break;
            }
        }

        else
        {
            high = mid - 1;
        }
    }

    // while(low<=high){

    //     int mid=(low+high)/2;
    //     if(a[mid]==data&&a[mid]!=a[mid+1])
    //     {
    //       upperbound=mid;
    //     }
    //     else if(a[mid]==data&&a[mid]!=a[mid-1])
    //     {
    //         lowerbound=mid;
    //     }

    //     else if(data<a[mid]||a[mid]==a[mid-1])
    //     {
    //         high=mid-1;
    //     }
    //     else{
    //         low=mid+1;

    //     }
    // }
    // if (a[lowerbound] == data || a[upperbound] == data)
    // {
    //     if (lowerbound == -1)
    //     {
    //         lowerbound = upperbound;
    //     }
    //     else
    //     {
    //         upperbound = lowerbound;
    //     }
    // }
    cout << lowerbound << endl;
    cout << upperbound << endl;
}