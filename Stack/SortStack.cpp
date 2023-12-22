#include<bits/stdc++.h>
using namespace std;
void sortedInsert(stack<int>&st,int num){
    if(st.empty()||st.top()<num){
        st.push(num);
        return;
    }
    int x=st.top();
    st.pop();
    sortedInsert(st,num);
    st.push(x);
}
void sort(stack<int>&st){
    if(st.empty())
        return;
    
    int num=st.top();
    st.pop();
    sort(st);
    sortedInsert(st,num);
}
void print(stack<int>st){
    while(!st.empty()){
        cout<<st.top();
        st.pop();
    }
    cout<<endl;
    return;
}
int main()
{
    stack<int>st;
    st.push(1);
    st.push(3);
    st.push(2);
    print(st);
    sort(st);
    print(st);
}