#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int* a = new int[n];
    for(int i = 0 ; i < n; i++){
        cin>>a[i];
    }
    int data;
    cin>>data;
    
    
         
         
    // write your code here
    int cvalue = -1, fvalue = -1;
        int mid=0,low = 0, high = n - 1;

        while (low <= high)
        {
            mid = (low + high) / 2;
            //  cout<<"low : "<<low<<endl;
            //  cout<<"high : "<<high<<endl;
            //  cout<<"a[low] : "<<a[low]<<endl;
            //  cout<<"a[high] : "<<a[high]<<endl;
            //  cout<<"mid : "<<mid<<endl;
            //  cout<<"a[mid] :"<<a[mid]<<endl;
            if (a[mid] == data)
            {
               cout<<"value "<<data<<" is present "<<endl;
                cvalue = a[mid];
                fvalue = a[mid];
                break;
            }
            else if (data < a[mid])
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        
        if (a[mid] != data)
        {
            cout<<" value is not present "<<endl;

            if(mid==0)
            {
                fvalue=a[mid];
                cvalue=a[mid];
            }
           else if(mid==n-1){
                fvalue=a[mid-1];
                cvalue=a[mid-1];

            }
            else{
            fvalue=a[high];
             cvalue=a[low];

            }

        }
      cout<<cvalue<<endl;
      cout<<fvalue<<endl;
    
    
}