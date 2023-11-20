#include<bits/stdc++.h>
using namespace std;
bool checkPalindrome(string s){
    string st=s;
    reverse(s.begin(),s.end());
    if(st==s)
        return true;
    return false;
}
int main(){
    string s="abcde";
    string sp;
    string ans="";
    for(int i=0;i<s.length();i++){
        sp=s.substr(i);
        if(!checkPalindrome(sp)){
            ans+=s[i];
        }
        else break;
    }
    reverse(ans.begin(),ans.end());
    cout<<ans;
}