#include<bits/stdc++.h>
using namespace std;
vector<int>leaders(vector<int>&arr){
    vector<int>ans;
    ans.push_back(arr[arr.size()-1]);
    for(int i=arr.size()-2;i>=0;i--){
        if(ans[ans.size()-1]<arr[i])
            ans.push_back(arr[i]);
    }

    for(int i=0;i<ans.size();i++)
        cout<<ans[i]<<" ";
    
}
int main()
{
    int n;
    cin>>n;
    vector<int>arr,ans;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    leaders(arr);
}