// Given a keypad as shown in the diagram, and an N digit number which is represented by array a[ ],
// the task is to list all words which are possible by pressing these numbers.
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve(int idx, vector<int>&arr, int N, string &st,vector<string> &ans, vector<string> &mapping)
{
    if(idx>=N)
    {
        ans.push_back(st);
        return;
    }
    int num=arr[idx];
    string value=mapping[num];

    for(int i=0;i<value.size();i++){
        st.push_back(value[i]);
        solve(idx+1,arr,N,st,ans,mapping);
        st.pop_back();
    }
}
vector<string> possibleWords(vector<int>&arr, int N)
{
    vector<string> mapping = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    vector<string> ans;
    string st;
    solve(0, arr, N, st, ans, mapping);
    for(int i=0;i<ans.size();i++)
        cout<<ans[i]<<endl;
    return ans;
}
int main(){
    int n,x;
    cin>>n;
    vector<int>arr;
    for(int i=0;i<n;i++){
        cin>>x;
        arr.push_back(x);
    }
    vector<string>ans=possibleWords(arr,n);
    
}