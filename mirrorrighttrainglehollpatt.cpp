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
  int m=1;
  for(int i=n;i>=1;i--){
    for(int j=1;j<=i-1;j++){
        cout<<" ";
    }
    for(int k=1;k<=m;k++){
        if(k==1||k==m||m==n){
            cout<<"*";
        }
        else cout<<" ";
    }
    cout<<endl;
    m++;
  }
  return 0;
}