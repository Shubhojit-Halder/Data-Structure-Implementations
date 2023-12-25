#include <bits/stdc++.h>
using namespace std;
const int compare(string a, string b)
{
    if (a.size() == b.size())
    {
        for (int i = 0; i < a.size(); ++i)
        {
            if (a[i] != b[i])
            {
                return a[i] < b[i];
            }
        }
    }
    return a.size() < b.size();
}
void solve(int idx, vector<string> &arr, vector<string> &ans, string ds)
{
    if (idx == arr.size())
    {
        ans.push_back(ds);
        return;
    }
    // notTake
    solve(idx + 1, arr, ans, ds);
    // take
    solve(idx + 1, arr, ans, ds + arr[idx]);
}
int main()
{
    // int n,r;
    // cin>>n>>r;
    string st;
    cin >> st;
    vector<string> arrSt;
    string s;
    for (int i = 0; i < st.size(); i++)
    {
        if (st[i] == ',')
        {
            arrSt.push_back(s);
            s = "";
        }
        else
        {
            s.push_back(st[i]);
        }
    }
    arrSt.push_back(s);
    // cout<<arrSt.size();

    vector<string> ans;
    string ds = "";
    solve(0, arrSt, ans, ds);
    sort(ans.begin(), ans.end(), compare);
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << " ";
}