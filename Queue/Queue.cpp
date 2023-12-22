#include <bits/stdc++.h>
using namespace std;

class Queue
{
    int *arr;
    int front;
    int rear;
    int size;

    public:
    Queue()
    {
        size = 10001;
        arr = new int[size];
        front = 0;
        rear = 0;
    }
    void push(int x)
    {
        if(rear==size){
            cout<<"Queue is full"<<endl;
            return;
        }
        else
            arr[rear++] = x;
        return;
    }
    int pop()
    {
        if (front == rear)
        {
            cout << "Empty queue" << endl;
            front=0;
            rear=0;
            return -1;
        }
        int x = arr[front];
        arr[front]=-1;
        front++;
        cout << "Popped" << x << endl;
        return x;
    }
    bool isEmpty()
    {
        if (front == rear)
            return true;
        else
            return false;
    }
};
int main()
{
    Queue Q;
    Q.push(1);
    Q.push(2);
    Q.push(3);
    Q.pop();
    Q.pop();
    Q.push(4);
    Q.pop();
    Q.pop();
    Q.pop();
    Q.pop();


}