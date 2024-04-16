#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0 ; i<n;i++){
        cin>>v[i];
    }
    int totalHammingDistance = 0;
    for(int i= 31 ; i>=0;i--){
        int cnt1 =0 , cnt0 = 0;
        for(int j=0 ;j<n;j++){
            if(v[j] & (1LL<<i)){
                cnt1++;
            }
            else{
                cnt0++;
            }
        }
        totalHammingDistance += (cnt1*cnt0);
    }
    cout<<totalHammingDistance<<"\n";
    return 0;
}