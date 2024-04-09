#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll sz ;
    cin>>sz;
    vector<ll> v(sz);
    for(int i=0 ; i<sz;i++){
        cin>>v[i];
    }
    ll n;
    cin>>n;
    ll ans =0 , i =0  , mx = 0;
    while(mx<n){
        if(i<sz && v[i]<=mx+1){
            mx += v[i];
            i++;
        }
        else{
            mx += (mx+1);
            ans++;
        }
    }
    cout<<ans<<"\n";
    return 0;
}