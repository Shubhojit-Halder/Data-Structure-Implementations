#include<bits/stdc++.h>
using namespace std;
int secondLargest(int arr[])
{
    int max=INT_MIN;
    int sec=INT_MIN;
    
    // if(n<2)
    //     return -1;
    for(int i=0;i<4;i++)
    {
        if(max<arr[i])
        {
            sec=max;
            max=arr[i];
        }
        else if(sec<arr[i] && arr[i]!=max){
            sec=arr[i];
        }
    }
    return sec;

}
int secondSmallest(int arr[])
{
    int max=INT_MAX;
    int sec=INT_MAX;
    
    // if(n<2)
    //     return -1;
    for(int i=0;i<4;i++)
    {
        if(max>arr[i])
        {
            sec=max;
            max=arr[i];
        }
        else if(sec>arr[i] && arr[i]!=max){
            sec=arr[i];
        }
    }
    return sec;

}
int main()
{
    int arr[4]={2,5,4,1};
    cout<<secondLargest(arr)<<endl;
    cout<<secondSmallest(arr);
}