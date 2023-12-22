#include<bits/stdc++.h>
using namespace std;

bool checkParenthesis(string s){
    stack<char>st;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='(' || s[i]=='{' || s[i]=='[')
            st.push(s[i]);
        else if(s[i]==')' && st.top()=='(')
            st.pop();
        else if(s[i]=='}' && st.top()=='{')
            st.pop();
        else if(s[i]==']' && st.top()=='[')
            st.pop();
    }
    if(st.size()==0)
        return true;
    else
        return false;
}
int main()
{
    string s;
    cin>>s;
    cout<<checkParenthesis(s);
}