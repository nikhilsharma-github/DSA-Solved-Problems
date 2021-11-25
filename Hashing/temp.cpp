// { Driver Code Starts
//Initial function template for C++

#include<bits/stdc++.h>
using namespace std;
#define ll long long 

 // } Driver Code Ends
//User function template for C++

class Solution{
    public:

    //Function to check if two arrays are equal or not.
    bool check(vector<ll> A, vector<ll> B, int n) {
        //code here
        unordered_map<long long,int> ma;
        unordered_map<long long,int> mb;
        int s1=0,s2=0;
        for(int i=0;i<n;i++)
        {
            ma[A[i]]++;
            mb[B[i]]++;
        }
        
        // for(auto it=ma.begin();it!=ma.end();it++)
        // {
        //     cout<<it->first<<" "<<it->second<<endl;
        // }
        // cout<<endl;
        // for(auto it=mb.begin();it!=mb.end();it++)
        // {
        //     cout<<it->first<<" "<<it->second<<endl;
        // }
        // cout<<endl;
        // for(int i=0;i<n;i++)
        // {
        //     if(ma.at(A[i])!=mb.at(B[i]))
        //     return false;
        // }
        
        // // if(r==n-1)
        // // return true;
        // // else 
        // return false;
        
    // }
    
};

// { Driver Code Starts.
int main()
 {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        
        vector<ll> arr(n,0),brr(n,0);
        
        // increase the count of elements in first array
        for(ll i=0;i<n;i++)
            cin >> arr[i];
        
        
        // iterate through another array
        // and decrement the count of elements
        // in the map in which frequency of elements
        // is stored for first array
        for(ll i=0;i<n;i++)
            cin >> brr[i];
        Solution ob;
        cout << ob.check(arr,brr,n) << "\n";
    }
	return 0;
}  // } Driver Code Ends