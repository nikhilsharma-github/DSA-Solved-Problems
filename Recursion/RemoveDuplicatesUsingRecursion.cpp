#include <bits/stdc++.h>
using namespace std;
#define deb(x) cout << #x << "=" << x << endl


struct node
{
    int data;
    struct node *next;
    // struct node *prev;
    node(int value)
    {
        data = value;
        next = NULL;
        // prev=NULL;
    }
};
void plist(node *temp)
{
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int listSize(struct node *head)
{
    int size = 0;
    struct node *sizeptr = head;
    while (sizeptr != NULL)
    {
        size++;
        sizeptr = sizeptr->next;
    }
    return size;
}

void pmatrix(vector<vector<int>> a, int r, int c)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}
void parray(int a[],int n){
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void removeDup(string ip){

    if(ip.length()==0)
    return;

      if(ip[0]==ip[1]){
           removeDup(ip.substr(1));   

      }
      else{
          cout<<ip[0];
          removeDup(ip.substr(1));   
      }



}

string removeDup2(string ip){
  
  if(ip.length()==0){
      cout<<"## base Case "<<endl;
      cout<<"Returning empty string "<<endl;

      return "";
  }
    

    char x=ip[0];
    cout<<"Currently first char of string is  : "<<x<<endl;
    string ros=removeDup2(ip.substr(1));
    cout<<"Rest of string left here : "<<ros<<endl;
    
     if(ros[0]==x){
         cout<<ros[0]<<" ==  char "<<x<<endl;
         cout<<"Char and ROS[0] is same here, so returning string "<<ros<<endl;
         return ros;
     }
     else{
         cout<<"Char and ROS[0] is not same, so returning "<<(x+ros)<<" here "<<endl;
         return (x+ros);
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
         string ip;
         cin>>ip;
           cout<<"String is : "<<ip<<endl;
          
         removeDup(ip);
         
         cout<<endl;
         cout<<"SECOND WAY : "<<endl;
         cout<<removeDup2(ip);
         cout<<endl;
       

    }
    return 0;
}