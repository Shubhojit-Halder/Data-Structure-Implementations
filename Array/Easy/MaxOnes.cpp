#include<bits/stdc++.h>
using namespace std;
int main()
{
    int count=INT_MIN;
    vector<int>a={1,1,0,1,1,1};
    int temp=0;
    for(int i=0;i<a.size();i++){
        if(a[i]==1)
            temp++;
        else{
            count=max(count,temp);
            temp=0;
        }
    }
    count=max(count,temp);
    cout<<count;
}