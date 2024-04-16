#include<bits/stdc++.h>
using namespace std;
#define int long long int
signed main(){
    int n; 
    cin >> n;
    vector<vector<int>> v(n,vector<int>(n));
    for(int i=0 ; i<n;i++){
        for(int j=0 ; j<n;j++){
            cin>>v[i][j];
        }
    }
    int ans = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            int cnt = 0;
            for(int k=0 ;k<n;k++){
                if(v[i][k] == 1 && v[j][k]==1){
                    cnt++;
                }
            }
            ans += ((cnt*(cnt-1))/2);
        }
    }
    cout << ans;

}