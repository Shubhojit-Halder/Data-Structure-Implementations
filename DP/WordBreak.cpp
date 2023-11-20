#include <bits/stdc++.h>
using namespace std;
void solve(vector<string> &dict, vector<string> &res, string s, string ans){
    if(s.length()==0){
        res.push_back(ans.substr(0,ans.length()-1));
        return ;
    }
    for(int i=0;i<s.length();i++){
        string left=s.substr(0,i+1);
        if(find(dict.begin(),dict.end(),left)!=dict.end()){
            string right=s.substr(i+1);
            solve(dict,res,right,ans+left+" ");
        }
    }
}
vector<string> wordBreak(int n, vector<string> &dict, string s)
{
    vector<string> res;
    solve(dict, res, s, "");
    return res;
}
int main()
{
    string s = "catsanddog";
    int n = 5;
    vector<string> dict = {"cats", "cat", "and", "sand", "dog"};
    vector<string> res;
    res = wordBreak(n, dict, s);
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<"\n";
    }
}