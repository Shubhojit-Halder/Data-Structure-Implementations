#include <bits/stdc++.h>
using namespace std;
void generateAllStringsUtil(int K, char str[], int n)
{
    if (K == n)
    {
        str[n] = '\0';
        cout << str << " ";
        return;
    }
    if(str[n-1]=='0')
    {
        str[n]='0';
        generateAllStringsUtil(K,str,n+1);
        str[n]='1';
        generateAllStringsUtil(K,str,n+1);
    }
    else{
        str[n]='0';
        generateAllStringsUtil(K,str,n+1);
    }
}
void generateBinaryStrings(int K)
{
    if (K <= 0)
        return;

    // One by one stores every
    // binary string of length K
    char str[K];

    // Generate all Binary string
    // starts with '0'
    str[0] = '0';
    generateAllStringsUtil(K, str, 1);

    // Generate all Binary string
    // starts with '1'
    str[0] = '1';
    generateAllStringsUtil(K, str, 1);
}
int main()
{
    int n;
    cin >> n;
    // vector<string> ans;
    generateBinaryStrings(n);
    // for (int i = 0; i < ans.size(); i++)
    //     cout << ans[i] << " ";
}