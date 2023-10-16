#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>arr={0,1,1,2,2,2,3,3,4};
    
    int i=0,j=0;
    while(j<arr.size()){
        if(arr[i]==arr[j])
            j++;
        else{
            i++;
            arr[i]=arr[j];
            j++;
        }
    }

    for(auto it:arr)
        cout<<it;
}