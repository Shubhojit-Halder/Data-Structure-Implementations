#include<bits/stdc++.h>
using namespace std;
void removeFromBottom(stack<int>&st){
    if(st.size()==1){
        int x=st.top();
        cout<<"Popped"<<x<<endl;
        st.pop();
        return;
    }
    int num=st.top();
    st.pop();
    removeFromBottom(st);
    st.push(num);
}
void push(stack<int>&st,int n){
    st.push(n);
}
void pop(stack<int>&st){
    if(st.size()==0){
        cout<<"Queue is empty"<<endl;
        return;
    }
    removeFromBottom(st);
}
void print(stack<int>st){
    if(st.size()==0){
        cout<<"Queue is empty"<<endl;
        return;
    }
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;
}
int main(){
    stack<int>st;
    push(st,1);
    push(st,2);
    push(st,3);
    print(st);
    pop(st);
    print(st);
    pop(st);
    print(st);
    pop(st);
    print(st);

}