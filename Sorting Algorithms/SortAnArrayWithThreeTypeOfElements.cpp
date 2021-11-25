#include <bits/stdc++.h>
using namespace std;
#define deb(x) cout << #x << "=" << x << endl

void parray(int a[],int n){
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

void sortingAnArrayOfThreeTypeOfElements(int a[],int n){

 int low=0,mid=0,high=n-1;
   
   while(mid<=high){


        if(a[mid]==1)
        {
            swap(a[mid],a[low]);
            low++,mid++;
        }
        else if(a[mid]==2)
        {
            mid++;
        }
        else{
            swap(a[high],a[mid]);
            high--;
        }

    //    if(a[mid]==2)
    //    mid++;

    //    else if(a[high]==3)
    //    {
    //        swap(a[mid],a[high]);
    //        high--;
    //    }
    //    else
    //    {
    //        swap(a[low],a[mid]);
    //        low++,mid++;
    //    }
   }

}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long test=1;
    cin >> test;
    while (test--)
    {
        cout<<"Testcase : "<<test+1<<endl;
        long long n;
        cin >> n;

        //  Input an array

         int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
           cout<<"Array is : "<<endl;
        parray(a,n);
      sortingAnArrayOfThreeTypeOfElements(a,n);
      cout<<"Array after sorting is : "<<endl;
      parray(a,n);

}
    return 0;
}