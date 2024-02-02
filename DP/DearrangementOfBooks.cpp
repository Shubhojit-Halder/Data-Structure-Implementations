#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>dp(n+1,0);

    // Base case
    // dp[2] = 1;

    // //tabulation
    // for (int i = 3; i <= n; i++)
    //     dp[i] = (i - 1) * (dp[i - 1] + dp[i - 2]);

    // cout<< dp[n];

    //space optimized
    int a=0,b=1;
    for(int i=3;i<=n;i++){
        int arr=(i-1)*(a+b);
        a=b;
        b=arr;
    }
    cout<< b;
}