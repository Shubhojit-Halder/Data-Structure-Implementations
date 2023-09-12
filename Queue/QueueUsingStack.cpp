#include<bits/stdc++.h>
using namespace std;
void removeFromBottom(stack<int>&st){
    if(st.size()==1){
        int x=st.top();
        st.pop();
        cout<<"Popped"<<x<<endl;
        return;
    }
    int num=st.top();
    st.pop();
    removeFromBottom(st);
    st.push(num);
}
void Qpop(stack<int>&st){
    if(st.size()==0)
    {
        cout<<"Empty Queue"<<endl;
        return;
    }
    else{
        removeFromBottom(st);
        return;
    }
        
}
void Qpush(stack<int>&st,int x){
    st.push(x);
    return;
}

int main(){
    stack<int>st;
    Qpush(st,1);
    Qpush(st,2);
    Qpush(st,3);
    Qpop(st);
    Qpop(st);
    Qpop(st);
    
}