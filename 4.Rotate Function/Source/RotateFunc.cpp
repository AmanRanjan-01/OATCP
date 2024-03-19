#include<bits/stdc++.h>
using namespace std;
#define int long long int
int mod = 1e9 +7;
signed main() {
    int n;
    cin >> n;
    if(n<=0){
        cout<<0<<"\n";
        return 0;
    }
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    int sum =0 , temp =0;
    for(int i=0 ; i<n;i++){
        sum += v[i];
        temp += (i*v[i]);
        sum %= mod;
        temp %=mod;
    }
    vector<int> dp(n);
    dp[0]=temp;
    int ans = INT_MIN;
    ans= temp;
    for(int i=1 ; i<n;i++){
        dp[i]=dp[i-1]+sum-(n*v[n-i]);
        dp[i]%= mod;
        ans = max(ans,dp[i]);
    }
    cout<<ans<<"\n";
    return 0;
}