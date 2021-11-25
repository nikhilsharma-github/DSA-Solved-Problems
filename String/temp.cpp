// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define deb(x) cout << #x << "=" << x << endl


 // } Driver Code Ends


class Solution
{
    public:
    //Function to find the first non-repeating character in a string.
    char nonrepeatingCharacter(string S)
    {
       //Your code here
       int c[256]={0};
       char resf='$',resc='$';
       int l=S.length();
       for(int i=l-1;i>=0;i--)
       {
           deb(resc);
           deb(resf);
           deb(i);
           if(c[S[i]]==1)
           {
               cout<<"value "<<S[i]<<" is not ans "<<endl;
               resc='$';


           }
           if(c[S[i]]==0)
           {
               cout<<" value "<<S[i]<<" may be the ans "<<endl;
               resf=S[i];
               resc=S[i];
               c[S[i]]++;
           }
       }
       if(resc!='$')
       resf=resc;

       return resf;
       
    }

};

// { Driver Code Starts.

int main() {
	
	int T;
	cin >> T;
	
	while(T--)
	{
	
	    string S;
	    cin >> S;
	    Solution obj;
        char ans = obj.nonrepeatingCharacter(S);
        
        if(ans != '$')
	    cout << ans;
        else cout << "-1";
            
        cout << endl;
	    
	}
	
	return 0;
}
  // } Driver Code Ends