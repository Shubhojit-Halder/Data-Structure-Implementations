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

void insertNode(Node* &tail,int element,int d){
    //assume element is present
    //empty list 
    if(tail==NULL){
        Node* newNode=new Node(d);
        tail=newNode;
        newNode->next=newNode;
    }
    else{
        Node* curr=tail;
        while(curr->data!=element){
            curr=curr->next;
        }
        Node* newNode=new Node(d);
        newNode->next=curr->next;
        curr->next=newNode;
    }
}
void deleteNode(Node* &tail,int element){
    if(tail==NULL)
    {
        cout<<"List is empty!";
        return;
    }
    if(tail==tail->next){
        tail=NULL;
        delete tail;
        return;
    }
    Node* prev=tail;
    Node* curr=prev->next;
    
    //>=2 node ll;
    while(curr->data!=element){
        prev=curr;
        curr=curr->next;
    }
    //1 node ll
    if(tail==curr)
        tail=prev;
    prev->next=curr->next;

    curr->next=NULL;
    delete curr;
}
void print(Node* tail){
    if(tail==NULL){
        cout<<"Empty list";
    }
    Node *temp=tail;
    do
    {
        cout<<tail->data<<" ";
        tail=tail->next;
    } while(tail!=temp);
    cout<<endl;
}
int main()
{
    Node *tail=NULL;
    insertNode(tail,1,1);
    insertNode(tail,1,2);
    insertNode(tail,2,3);
    insertNode(tail,3,4);
    insertNode(tail,4,5);
    print(tail);

    deleteNode(tail,1);
    deleteNode(tail,2);
    deleteNode(tail,4);
    deleteNode(tail,3);
    deleteNode(tail,5);

    // print(tail);
    // insertNode(tail,1,2);
    print(tail);
}