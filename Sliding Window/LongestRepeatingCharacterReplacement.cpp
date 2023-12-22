#include<bits/stdc++.h>
using namespace std;
int characterReplacement(string s, int k)
{
    int start = 0, end = 0;
    int charCount = 0, maxLen = 0;
    while (end < s.size())
    {
        if (s[start] != s[end])
        {
            charCount++;
        }
        while (charCount > k )
        {
            if (s[start] == s[end])
                charCount--;
            start++;
        }
        maxLen = max(maxLen, end - start + 1);
        end++;
    }
    // maxLen=max(maxLen,end-start);
    return maxLen;
}
int main()
{
    string s;
    int k;
    cin>>s>>k;
    cout<<characterReplacement(s,k);
}