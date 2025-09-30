#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prv;
    Node* next;

    //constructor
    Node(int d){
        this -> data = d;
        this -> prv = NULL;
        this -> next = NULL;
    }

    ~Node(){
        int value = this -> data;
        if(next != NULL){
            delete next;
            next = NULL;
        }
        cout<<"memory free for node with data "<< value<<endl;
    }
};
// print func or we can say way of traverse
void printd(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp -> data<<" ";
        temp = temp -> next;
    }
    cout<<endl;
}
// gives the length
int getlength(Node* head){
    int len=0;
    Node* temp = head;
    while(temp != NULL){
        
        temp = temp -> next;
        len++;
    }
    return len;
}
// inserting at start
void Insertathead(int data, Node* &head){
    Node* temp = new Node(data);
    temp -> next = head;
    head -> prv = temp ;
    head = temp;

}
// insertion a tail 
void insertattail(int data, Node* &tail){
    Node* temp = new Node(data);

    tail -> next = temp;
    temp -> prv = tail;
    tail = temp;
}

// insertion at middle 
void insertatmiddle(int pos, int d, Node* &head, Node* &tail){
    if(pos==1){
        Insertathead(d, head);
        return;
    }
    Node* temp = head;
    int cnt=1;
    while(cnt<pos-1){
        temp = temp -> next;
        cnt++;
    }
    if( temp -> next == NULL){
        insertattail(d, tail);
        return;
    }
    Node* nodetoinsert = new Node(d);
    nodetoinsert -> next = temp -> next;
    temp -> next -> prv = nodetoinsert;
    temp -> next  = nodetoinsert;
    nodetoinsert -> prv = temp; 
}

void deletionofnode(int pos, Node* &head){
    if(pos==1){
        Node* temp = head;
        temp -> next -> prv = NULL;
        head = temp ->  next;
        temp -> next = NULL;
        delete temp;
    }
    Node* prev = NULL;
    Node* curr = head;
    int cnt = 1;
    while(cnt < pos){
        prev = curr;
        curr = curr -> next;
        cnt++;
    }
    // my code
    // prev -> next = curr -> next;
    // curr -> next -> prv = prev;
    // curr -> prv = NULL;
    // curr -> next  = NULL;
    // delete curr;
    // love babar
    curr-> prv = NULL;
    prev -> next = curr -> next;
    curr -> next = NULL;
    delete curr;


}
int main(){
    Node* Node1 = new Node(10); 
    Node* head = Node1;
    Node* tail = Node1;

    
    cout<<"length of linked list "<<getlength(head)<<endl;

    Insertathead(11,head);
    printd(head);
    cout<<"length of linked list "<<getlength(head)<<endl;
    insertattail(23, tail);
    printd(head);
    cout<<"length of linked list "<<getlength(head)<<endl;
    insertatmiddle(3, 44, head, tail);
    printd(head);

    deletionofnode(2,head);
    printd(head);
    
return 0;
}