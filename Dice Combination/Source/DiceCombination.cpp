#include<bits/stdc++.h>
using namespace std;
long long int mod = 1e9+7;
long long int solve(long long int n,vector<long long int> &dp){
    if(n == 0){
        return 1;
    }
    if(dp[n]!=-1)return dp[n];
    long long int sum =0;
    for(int i=1 ;i<=6;i++){
        if(i>n)break;
        sum = sum+solve(n-i,dp);
        sum %= mod;
    }
    return dp[n]=sum;
}

int main(){
    long long int testcases;
    cin>>testcases;
    while(testcases--){
        long long int n;
        cin>>n;
        if(n<0){
            cout<<0<<"\n";
            continue;
        }
        vector<long long int> dp(n+1,-1);
        long long int ans = solve(n,dp);
        cout<<ans<<"\n";
    }
    return 0;
}
