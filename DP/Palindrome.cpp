#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string s, int start, int end)
{
    while (start <= end)
    {
        if (s[start++] != s[end--])
            return false;
    }
    return true;
}

void partitionHelper(int index, string s, vector<string> &path,
                     vector<vector<string>> &res)
{
    if (index == s.size())
    {
        res.push_back(path);
        return;
    }
    for (int i = index; i < s.size(); ++i)
    {
        if (isPalindrome(s, index, i))
        {
            path.push_back(s.substr(index, i - index + 1));
            partitionHelper(i + 1, s, path, res);
            path.pop_back();
        }
    }
}


void palindromicPartition(string s)
{
    vector<vector<string>> res;
    vector<string> path;
    partitionHelper(0, s, path, res);
    
    vector<vector<string>>newRes;
    for(int i=0;i<res.size();i++){
        if(res[i].size()==3 && res[i][0].size()<=res[i][1].size() && res[i][1].size()<=res[i][2].size())
            newRes.push_back(res[i]);
    }
    
    for(int i=0;i<newRes.size();i++){
        for(int j=0;j<3;j++){
            cout<<newRes[i][j]<<" ";
        }
        cout<<"\n";
    }

}

int main()
{
    string s;
    cin>>s;
    palindromicPartition(s);
}