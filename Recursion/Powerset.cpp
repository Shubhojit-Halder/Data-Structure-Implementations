#include<bits/stdc++.h>
using namespace std;
class Solution
{
private:
    void solve(string s, string output, int idx, vector<string> &ans)
    {
        if (idx >= s.size())
        {
            if (output.size() != 0)
                ans.push_back(output);
            return;
        }
        
        // take
        output.push_back(s[idx]);
        solve(s, output, idx + 1, ans);
        // notTake
        solve(s, output, idx + 1, ans);
    }

public:
    void AllPossibleStrings(string s)
    {
        int n = s.size();
        vector<string> ans;
        string output = "";
        int idx = 0;
        solve(s, output, idx, ans);
        cout<<ans.size();
        for(int i=0;i<ans.size();i++)
            cout<<ans[i]<<" ";
        // return ans;
    }
};
int main()
{
    Solution A;
    A.AllPossibleStrings("abc");
}