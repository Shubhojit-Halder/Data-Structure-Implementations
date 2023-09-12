#include<iostream>
#include<queue>
using namespace std;

void StackPop(queue<int>&q){
    if(q.size()==0){
        cout<<"Empty"<<endl;
        return;
    }
    else{
      queue<int>temp;
      while(q.size()!=1){
        temp.push(q.front());
        q.pop();
      }  
      int x=q.front();
      q.pop();
      while(temp.size()!=0)
      {
        q.push(temp.front());
        temp.pop();
      }
      cout<<"Popped"<<x<<endl;
      return;
    }
}
void Stackpush(queue<int>&q,int x){
    q.push(x);
}
int main(){
    queue<int>q;
    Stackpush(q,1);
    Stackpush(q,2);
    StackPop(q);
    StackPop(q);
    StackPop(q);
}