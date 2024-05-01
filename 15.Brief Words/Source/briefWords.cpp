#include <bits/stdc++.h>
using namespace std;
#define int long long int
vector<string> subSeqGenerator(string &str, string curr, int ind, int len)
{
    vector<string> ans;
    // Base Cases
    if (len == 0)
    {
        ans.push_back(curr);
        return ans;
    }
    if (ind == str.length())
    {
        return ans;
    }
    vector<string> withCurrent = subSeqGenerator(str, curr + str[ind], ind + 1, len - 1);
    ans.insert(ans.end(), withCurrent.begin(), withCurrent.end());
    vector<string> withoutCurrent = subSeqGenerator(str, curr, ind + 1, len);
    ans.insert(ans.end(), withoutCurrent.begin(), withoutCurrent.end());
    return ans;
}

signed main()
{
    int n;
    cin >> n;
    vector<vector<string>> res;
    for (int i = 0; i < n; i++){
        string s;
        cin >> s;
        vector<string> ans;
        set<string> st;
        for (int i = 1; i <= 4; ++i){
            vector<string> subs = subSeqGenerator(s, "", 0, i);
            for (int j = 0; j < subs.size(); j++){
                if (st.find(subs[j]) == st.end())
                {
                    ans.push_back(subs[j]);
                    st.insert(subs[j]);
                }
            }
        }
        res.push_back(ans);
    }
    for (int i=0; i<res.size();i++){
        for (int j = 0; j < res[i].size(); j++){
            cout << res[i][j] <<"\n";
        }
        cout<<"\n\n";
    }
    return 0;
}