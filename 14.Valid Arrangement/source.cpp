#include<bits/stdc++.h>
using namespace std;
#define int long long int

void requiredPath(unordered_map<int, vector<int>> &g, int node,vector<vector<int>> &path)
{
    auto &gp = g[node];
    while (gp.size())
    {
        int adj = gp.back();
        gp.pop_back();
        requiredPath(g,adj,path);
        path.push_back({node, adj});
    }
}

signed main(){
    int n;
    cin>>n;
    unordered_map<int,int> degree;
    unordered_map<int , vector<int>> g;
    for(int i=0 ;i<n;i++){
        int  u , v;
        cin>>u>>v;
        g[u].push_back(v);
        degree[v]--;
        degree[u]++;
    }
    int stNode =-1;
    for(auto it: degree){
        if(it.second == 1){
            stNode = it.first;
            break;
        }
        else{
            stNode = it.first;
        }
    }
    vector<vector<int>> res;
    requiredPath(g,stNode,res);
    if(res.size()!=n){
        cout<<"No valid arrangement possible\n";
    }
    else{
        reverse(res.begin(),res.end());
        cout<<"Valid arrangement is {";
        int cnt =0;
        for(auto i: res){
            cout<<"("<<i[0]<<","<<i[1]<<")";
            cnt++;
            if(cnt!=res.size()){
                cout<<",";
            }
        }
        cout<<"}\n";
    }
}