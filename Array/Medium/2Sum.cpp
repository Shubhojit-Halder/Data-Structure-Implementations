#include<bits/stdc++.h>
using namespace std;
pair<int,int> twoSum(vector<int>&arr,int k)
{
    int start=0,end=arr.size()-1;
    while(start<end)
    {
        if(arr[start]+arr[end]==k)
            return {start,end};
        else if(arr[start]+arr[end]>k)
            end--;
        else
            start++;
    }
    return {-1,-1};
}
int main()
{
    vector<int>arr={2,5,8,9,10};
    int k=10;
    pair<int,int>ans=twoSum(arr,k);
    cout<<ans.first<<ans.second;
}