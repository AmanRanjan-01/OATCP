#include <bits/stdc++.h>
using namespace std;
#define ll long long int
 
 ll mod = 1e9+7;
int solve(int i,int j,vector<int > a,vector<int>b,vector<vector<int>> &dp)
{
    if(i==a.size() || j==b.size())
    return 0;
    if(dp[i][j]!=-1){
        return dp[i][j];
    }
    if(a[i]<=b[j])
      {
          if(b[j]-a[i]<=1)
          {
              return dp[i][j]=(1+ solve(i+1,j+1,a,b,dp))%mod;
              
          }
          else
          return dp[i][j]=solve(i+1,j,a,b,dp)%mod;
          
      }
      else
      {
          if(a[i]-b[j]<=1)
          {
             return dp[i][j]=(1+ solve(i+1,j+1,a,b,dp))%mod;
          }
          else
          return dp[i][j]=(solve(i,j+1,a,b,dp))%mod;
      } 
}
 
int main() {
    ll t=1;
    while(t--)
    {
    ll n;
    cin>>n;
    vector<int> a(n);
    for(int j=0;j<n;j++)
      cin>>a[j];
  
     ll m;
    cin>>m;
    vector<int> b(m);
    for(int j=0;j<m;j++)
      cin>>b[j];
  sort(a.begin(),a.end());
  sort(b.begin(),b.end());
  vector<vector<int>> dp(n,vector<int>(m,-1));
  cout<<solve(0,0,a,b,dp)%mod<<"\n";
}
return 0;
}