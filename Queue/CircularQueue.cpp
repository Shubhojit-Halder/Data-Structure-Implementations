#include<bits/stdc++.h>
using namespace std;
class CircularQueue
{
private:
    int size;
    int front,rear;
    int *arr;
public:
    CircularQueue(int size){
        size=100001;
        arr=new int[size];
        front=-1;
        rear=-1;
    }
    bool enqueue(int x){
        if((front==0 && rear==size-1)||(rear=(front-1)%(size-1))){
            cout<<"Queue is full"<<endl;
            return false;
        }
        else if(front==-1) //first element to push
        {
            front=0;
            rear=0;
        }
        else if(rear==size-1 && front>0) //to maintain cyclic order
        {
            rear=0;
        }
        else //normal push
        {
            rear++;
        }
        arr[rear]=x;
        return true;
    }
    int dequeue(){
        if(front==-1)
        {
            cout<<"Queue is empty";
            return -1;
        }
        int ans=arr[front];
        arr[front]=-1;

        if(front==rear){ //only one elem is present
            front=-1;
            rear=-1;
        }
        else if(front==size-1){  //to maintain cyclic order
            front=0;
        }
        else
            front++;
        return ans;
    }
    
};

int main(){
    
}