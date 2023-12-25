#include <bits/stdc++.h>
using namespace std;
void solve(int oneCnt, int K, int N, vector<string> &ans, string &ds)
{
    if (ds.size() == K)
    {
        if (oneCnt == N)
            ans.push_back(ds);
        return;
    }
    // take One
    if (oneCnt < N)
    {
        ds.push_back('1');
        solve(oneCnt + 1, K, N, ans, ds);
        ds.pop_back();
    }
    // take zero
    ds.push_back('0');
    solve(oneCnt, K, N, ans, ds);
    ds.pop_back();
}
int main()
{
    int K, N;
    cin >> K >> N;
    if(K==N){
        cout<<0;
        return 0;
    }
    vector<string> ans;
    string ds;
    solve(0, K, N, ans, ds);
    
    // for (int i = 0; i < ans.size(); i++)
    //     cout << ans[i] << " ";

    int minZero=INT_MAX;
    for (int i = 0; i < ans.size(); i++)
    {
        int maxZero = INT_MIN;
        int zeroCount = 0;
        for (int j = 0; j < K; j++)
        {
            if (ans[i][j] == '0')
            {
                zeroCount++;
            }
            else
            {
                zeroCount = 0;
            }
            maxZero = max(maxZero, zeroCount);
        }
        
        minZero=min(minZero,maxZero);
    }
    cout<<minZero;
}