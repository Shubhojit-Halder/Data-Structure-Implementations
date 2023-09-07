#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node *next;

        //Constructor
        Node(int data)
        {
            this->data=data;
            this->next=NULL;
        }

        //Destrutor
        ~Node()
        {
            int value=this->data;
            //memory free
            if(this->next!=NULL){
                delete next;
                this->next=NULL;
            }
            cout<<"memory is free for node with data"<<value<<endl;
        }
};
int main()
{
    
}