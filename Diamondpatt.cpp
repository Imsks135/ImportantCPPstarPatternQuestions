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
  int spaces=n-1;  
  int stars=1;  
  for(int i=1;i<=n;i++)  
  {  
    for(int j=1;j<=spaces;j++)  
    {  
      printf(" ");  
    }  
    for(int k=1;k<=stars;k++)  
    {  
      printf("*");  
    }  
    if(spaces>i)  
    {  
      spaces=spaces-1;  
      stars=stars+2;  
    }  
    if(spaces<i)  
    {  
      spaces=spaces+1;  
      stars=stars-2;  
    }  
    cout<<endl; 
  }
  return 0;
}