#include<iostream>
using namespace std;
class Node{
    public:
        int data;
        Node *prev;
        Node *next;

        //constructor
        Node(int data)
        {
            this->data=data;
            this->prev=NULL;
            this->next=NULL;
        }

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
int getLength(Node* head)
{
    int len=0;
    Node*temp=head;
    while(temp!=NULL)
    {
        len++;
        temp=temp->next;
    }
    return len;
}
void insertAtHead(Node* &tail, Node* &head, int d) {

    //empty list
    if(head == NULL) {
        Node* temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else{
        Node* temp = new Node(d);
        temp -> next = head;
        head -> prev = temp;
        head = temp;
    }

}


void insertAtTail(Node* &tail,Node* &head, int d) {
    if(tail == NULL) {
        Node* temp = new Node(d);
        tail = temp;
        head = temp;
    }
    else{
        Node* temp = new Node(d);
        tail -> next  = temp;
        temp -> prev = tail;
        tail = temp;
    }

}
void insertAtPosition(Node* & tail, Node* &head, int position, int d) {
    
    //insert at Start
    if(position == 1) {
        insertAtHead(tail,head, d);
        return;
    }

    Node* temp  = head;
    int cnt = 1;

    while(cnt < position-1) {
        temp = temp->next;
        cnt++;
    }

    //inserting at Last Position
    if(temp -> next == NULL) {
        insertAtTail(tail,head,d);
        return ;
    }

    //creating a node for d
    Node* nodeToInsert = new Node(d);

    nodeToInsert ->next = temp -> next;
    temp -> next -> prev = nodeToInsert;
    temp -> next = nodeToInsert;
    nodeToInsert -> prev = temp;
}
void deleteNode(int position,Node* &head)
{
    if(position==1)
    {
        Node *temp=head;
        temp->next->prev=NULL;
        head=temp->next;
        temp->next==NULL;
        delete temp;
    }
    else{
        Node* curr=head;
        Node* prev=NULL;

        int cnt=1;
        while(cnt<position)
        {
            prev=curr;
            curr=curr->next;
            cnt++;
        }
        curr->prev=NULL;
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
    }
}
void Print(Node *head)
{
    Node * temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<endl;
}
int main()
{
    Node* head = NULL;
    Node* tail = NULL;

    // Print(head);
    //cout << getLength(head) << endl;

    insertAtHead(tail,head, 11);
    insertAtHead(tail,head, 13);
    insertAtHead(tail,head, 8);
    insertAtTail(tail,head, 25);
    insertAtPosition(tail, head, 5, 100);
    Print(head);
    deleteNode(1,head);
    deleteNode(3,head);
    Print(head);
    cout<<getLength(head);

   
    // cout<<head->data<<" "<<tail->data<<endl;
}