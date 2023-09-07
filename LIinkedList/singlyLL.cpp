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

        // Destrutor
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

void InsertAtHead(Node* &head,int d)
{
    Node* temp=new Node(d);
    temp->next=head;
    head=temp;
}

void InsertAtTail(Node* &tail,int d)
{
    Node* temp=new Node(d);
    tail->next=temp;
    tail=temp;
}



void InsertAtPosition(Node* &head,Node* &tail,int pos,int d)
{
    Node* temp=head;
    if(pos==1)
        InsertAtHead(head,d);
    else{
        while(pos>2)
        {
            temp=temp->next;
            pos-=1;
        }
        //check if inserting at the last position
        if(temp->next!=NULL){
            Node* node=new Node(d);
            node->next=temp->next;
            temp->next=node;
        }
        else{
            InsertAtTail(tail,d);
        }
    }
}

void DeleteAtHead(Node* &head)
{
    Node* temp=head;
    head=head->next;
    temp->next=NULL;
    delete temp;
}
void DeleteAtPos(Node* &head,Node* &tail,int pos){
    if(pos==1)
        DeleteAtHead(head);
    else{
        Node *curr=head;
        Node *prev=NULL;
        int cnt=1;
        while(cnt<pos)
        {
            prev=curr;
            curr=curr->next;
            cnt++;
        }
        prev->next=curr->next;
        //if the node thats to be deleted is the last node
        if(curr->next==NULL)
        {
            tail=prev;
        }
            

        curr->next=NULL;
        delete curr;
        
    }

}
void Print(Node* &head){
    Node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main()
{
    Node* node1=new Node(1);
    Node *head=node1;
    Node *tail=node1;
    InsertAtHead(head,2);
    InsertAtHead(head,3);
    InsertAtPosition(head,tail,4,0);
    InsertAtTail(tail,8);
    InsertAtTail(tail,7);
    Print(head);
    DeleteAtHead(head);
    // DeleteAtPos(head,1);
    DeleteAtPos(head,tail,5);
    cout<<tail->data<<endl;
    Print(head);
}