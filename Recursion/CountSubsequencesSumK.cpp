#include<bits/stdc++.h>
using namespace std;
class CountSubsequencesSumK
{
private:
    void solve(int idx,int sum,int target,vector<int>&arr,vector<vector<int>>&ans,vector<int>&ds){
        if(sum==target)
        {
            ans.push_back(ds);
            return;
        }
        if(idx>=arr.size())
            return;
        
        // if(sum+arr[idx]<=target){
            ds.push_back(arr[idx]);
            solve(idx+1,sum+arr[idx],target,arr,ans,ds); //take
            ds.pop_back();
        // }
        solve(idx+1,sum,target,arr,ans,ds); //not take
    }
public:
    int CountSubSequences(vector<int>&arr,int target){
        vector<vector<int>>ans;
        vector<int>ds;
        solve(0,0,target,arr,ans,ds);
        for(int i=0;i<ans.size();i++){
            for(int j=0;j<ans[i].size();j++)
                cout<<ans[i][j]<<" ";
            cout<<endl;
        }
        return ans.size();
    }
};

int main(){
    int n,target,x;
    cin>>n>>target;
    vector<int>arr;
    for(int i=0;i<n;i++){
        cin>>x;
        arr.push_back(x);
    }

    CountSubsequencesSumK C=CountSubsequencesSumK();
    cout<<C.CountSubSequences(arr,target);

}

