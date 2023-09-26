#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class CombinationSum
{
void combination(int i, int t, vector<int> &arr, vector<vector<int>> &ans, vector<int> &ds)
    {
        if(i == arr.size()){
            if(t==0){
                
                ans.push_back(ds);
                return;
            }
            return;
        }
        
        if(arr[i]<=t)
        {
            ds.push_back(arr[i]);
            combination(i,t-arr[i],arr,ans,ds);
            ds.pop_back();
        }
        combination(i+1,t,arr,ans,ds);
    }
    
  public:
    //Function to return a list of indexes denoting the required 
    //combinations whose sum is equal to given number.
    vector<vector<int> > combinationSum(vector<int> &A, int B) {
        
        set<int> st(A.begin(),A.end()); //removing duplicates of array
        vector<int> Arr(st.begin(),st.end());
        
        vector<vector<int>> ans;
        vector<int>ds;
        sort(Arr.begin(),Arr.end());
        combination(0,B,Arr,ans,ds);
        return ans;
    }
};

int main(){
    vector<int>arr={7,2,6,5};
    int target=16;
    CombinationSum C;
    vector<vector<int>>ans=C.combinationSum(arr,target);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++)
            cout<<ans[i][j];
        cout<<endl;
    }
}