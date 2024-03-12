#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll mod = 1e9+7;
ll n;
bool isValid(ll i , ll j){
  if((i>=0 && i<n) && (j>=0 && j<n)){
    return true;
  }
  return false;
}
ll func(ll i , ll j , vector<vector<char>> &v,vector<vector<int>> &dp){
  if(i==0 && j==0){
    return 1;
  }
  ll ans = 0;
  if(v[i][j]=='*')return 0;
  if(dp[i][j]!=-1)return dp[i][j];
  if(isValid(i-1,j)){
    if(v[i-1][j]!='*'){
      ans = func(i-1,j,v,dp)%mod;
    }
  }
  if(isValid(i,j-1)){
    if(v[i][j-1]!='*'){
      ans = ((ans%mod)+(func(i,j-1,v,dp)%mod))%mod;
    }
  }
  return dp[i][j]=ans%mod;
}

int main(){
  cin>>n;
  vector<vector<char>> v(n,vector<char>(n));
  for(int i=0 ; i<n;i++){
    for(int j=0 ; j<n;j++){
      cin>>v[i][j];
    }
  }
  if(n==1){
    if(v[0][0]=='*')
    {
      cout<<0<<"\n";
      return 0;
    }
    else{
      cout<<1<<"\n";
      return 0;
    }
    
  }  
  vector<vector<int>> dp(n+1,vector<int>(n+1,-1));
  ll ans = func(n-1,n-1,v,dp);
  cout<<ans<<"\n";
  return 0;
}
