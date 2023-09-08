#include<bits/stdc++.h>
using namespace std;

void insertAtBottom(stack<int> &st,int num){
    if(st.empty()){
        st.push(num);
        return;
    }
    int x=st.top();
    st.pop();
    insertAtBottom(st,num);
    st.push(x);

}
void reverse(stack<int> &st){
    if(st.empty())
        return;
    int num=st.top();
    st.pop();
    reverse(st);
    insertAtBottom(st,num);
}
void print(stack<int>st){
    while(!st.empty()){
        cout<<st.top();
        st.pop();
    }
    cout<<endl;
    return;
}
int main(){
    stack<int>st;
    st.push(1);
    st.push(2);
    st.push(3);
    print(st);
    reverse(st);
    print(st);
}