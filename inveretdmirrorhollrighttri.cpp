#include<bits/stdc++.h>
using namespace std;
#define ll long long int;
#define inf 1e9;
#define mod 1000000007;
#define N 200100;
int main() 
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n;
  cin>>n;
  int m=n;
  for(int i=1;i<=n;i++)  
   {  
       for(int j=1;j<i;j++)  
       {  
           printf(" ");  
       }  
       for(int k=1;k<=m;k++)  
       {  
        if(i==1||k==1||k==m){
            cout<<"*";
        } 
        else cout<<" ";
       }  
       m--;  
     cout<<endl;  
    }  
  return 0;
}