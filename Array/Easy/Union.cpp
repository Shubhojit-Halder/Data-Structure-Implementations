#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>a1={1,2,3,4,5};
    vector<int>a2={2,4,6};

    map<int,int>mp;
    for(int i=0;i<a1.size();i++)
    {
        if(mp.find(a1[i])==mp.end())
            mp[a1[i]]++;
    }
    for(int i=0;i<a2.size();i++)
    {
        if(mp.find(a2[i])!=mp.end())
            cout<<a2[i]<<" ";
    }
}