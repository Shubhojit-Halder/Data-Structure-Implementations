#include<bits/stdc++.h>
using namespace std;
void generateParenthesis(int n,int open,int close,string &st,vector<string>&ans){
    if(open==n && close ==n)
    {
        ans.push_back(st);
        return;
    }
    if(open<n){
        st+='(';
        generateParenthesis(n,open+1,close,st,ans);
        st.pop_back();
    }
    if(close<open){
        st+=')';
        generateParenthesis(n,open,close+1,st,ans);
        st.pop_back();
    }
}
int main()
{
    int n;
    cin>>n;
    vector<string>ans;
    string st;
    generateParenthesis(n,0,0,st,ans);
    for(int i=0;i<ans.size();i++)
        cout<<ans[i]<<endl;
}