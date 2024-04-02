#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll n;
    cin>>n;
    if(n==0){
        cout<<0<<"\n";
        return;
    }
    vector<ll> nums(n);
    for(auto &x:nums)cin>>x;
    function<bool(ll, ll)> cmp = [&](ll x ,ll y)->bool{
        return to_string(x)+to_string(y)>to_string(y)+to_string(x);
    };
    sort(nums.begin(),nums.end(),cmp);
    if(nums[0]==0){
        cout<<0<<"\n";
        return 0;
    }
    string ans = "";
    for(int i = 0;i<n;i++){
        ans += to_string(nums[i]);
    }
    cout<<ans<<"\n";
    return 0;
}