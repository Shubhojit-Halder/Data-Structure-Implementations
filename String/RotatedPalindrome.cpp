// Given a string, check if it is a rotation of a palindrome. For example your function should return true for “aab” as it is a rotation of “aba”. 

// Examples: 

// Input:  str = "aaaad"
// Output: 1  
// // "aaaad" is a rotation of a palindrome "aadaa"

// Input:  str = "abcd"
// Output: 0
// "abcd" is not a rotation of any palindrome.


#include<bits/stdc++.h>
using namespace std;
bool checkPalindrome(string st){
    string snew=st;
    reverse(st.begin(),st.end());
    if(snew==st)
        return true;
    else    return false;
}
bool leftRotateAndCheck(string s){
    string st="";
    for(int i=0;i<s.size();i++){
        string left=s.substr(0,i+1);
        string right = s.substr(i+1);
        st=right+left;
        if(checkPalindrome(st))
            return 1;
    }
    return false;
}
bool rightRotateAndCheck(string s){
    string st="";
    for(int i=s.size()-1;i>=0;i--){
        string left=s.substr(0,i+1);
        string right = s.substr(i+1);
        st=right+left;
        if(checkPalindrome(st))
            return 1;
    }
    return false;
}
int main()
{
    string s;
    cin>>s;
    if(leftRotateAndCheck(s)||rightRotateAndCheck(s))
        cout<<1;
    else    
        cout<<0;
}