#include <bits/stdc++.h>
using namespace std;
string solve(string &s, int k)
{
    int low = 0, high = s.size() - 1;
    while (low < high )
    {
        if ((s[low] - '0') > (s[high] - '0'))
        {
            s[high] = s[low];
            k--;
        }
        else
        {
            s[low] = s[high];
            k--;
        }
        low++;
        high--;
    }

    if (k < 0)
        return "Not Possible";
    else if (k == 0)
        return s;
    else
    {
        int low = 0, high = s.size() - 1;
        if (k >= 2)
        {
            while (low < high && k >= 0)
            {
                s[low] = '9';
                s[high] = '9';
                k -= 2;
                low++;
                high--;
            }
        }
        if(k>=1 && s.size()%2!=0)
        {   
            s[s.size()/2]='9';
        }
    }
    return s;
}
int main()
{
    string s;
    int k;
    cin >> s >> k;
    string ans = solve(s, k);
    cout << ans;
}