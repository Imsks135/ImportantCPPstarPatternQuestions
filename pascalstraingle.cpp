#include<bits/stdc++.h>
using namespace std;
#define ll long long int;
#define inf 1e9;
#define mod 1000000007;
#define N 200100;
int main() 
{
  //ios_base::sync_with_stdio(false);
  //cin.tie(NULL);
    int rows;
    cout << "Enter the number of rows : ";
    cin >> rows;
    cout << endl;
    for (int i = 0; i < rows; i++)
    {
        int val = 1;
        for (int j = 1; j < (rows - i); j++)
        {
            cout << "  ";
        }
        for (int k = 0; k <= i; k++)
        {
            cout << "    " << val;
            val = val * (i - k) / (k + 1);
        }
        cout << endl << endl;
    }
    cout << endl;
  return 0;
}