#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll n;
    cin>>n;
    if(n==0){
        cout<<0<<"\n";
        return 0;
    }
    vector<ll> costs(n);
    for(auto &x:costs){
        cin>>x;
    }
    ll coins;
    cin>>coins;
    sort(costs.begin(),costs.end());
    ll totalIcecreams =0;
    for(ll i=0 ; i<n;i++){
        if(costs[i]<=coins){
            totalIcecreams++;
            coins -= costs[i];
        }
        else{
            break;
        }
    }
    cout<<totalIcecreams<<"\n";
    return 0;
}