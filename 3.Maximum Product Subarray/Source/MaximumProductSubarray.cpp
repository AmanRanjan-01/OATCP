#include <bits/stdc++.h>
using namespace std;
#define int long long int
int mod = 1e9+7;
signed main()
{
    int n;
    cin>>n;
    if(n<=0){
        cout<<0<<"\n";
        return 0;
    }
    vector<int> nums(n);
    for(int i=0 ; i<n;i++){
        cin>>nums[i];
    }
    int maxi = INT_MIN;
    int prod = 1;

    for (int i = 0; i < nums.size(); i++)
    {
        prod *= nums[i];
        prod%= mod;
        maxi = max(prod, maxi);
        if (prod == 0)
            prod = 1;
    }
    prod = 1;
    for (int i = nums.size() - 1; i >= 0; i--)
    {
        prod *= nums[i];
        prod%=mod;
        maxi = max(prod, maxi);
        if (prod == 0)
            prod = 1;
    }
    cout<<maxi<<"\n";
}
