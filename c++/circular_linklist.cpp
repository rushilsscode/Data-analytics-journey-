#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    // constructor
    Node(int d){
    this->data = d;
    this->next = NULL;
    }

    ~Node(){
        int value = this->data;
        if(this ->next != NULL){
            delete next;
            next = NULL;
        }
        cout<<"memory free for node with data "<< value<<endl;
    }
};

void insertnode(Node* &tail, int element, int d){
    // empty list
    if(tail == NULL){
        Node* newnode = new Node(d);
        tail = newnode;
        newnode -> next = newnode;
    }
    // non empty list 
    //assuming that the element is present in the list
    else{
        Node* curr = tail;
        while(curr -> data != element){
            curr = curr->next;
        }
        // element found
        Node* temp = new Node(d);
        temp->next = curr -> next;
        curr->next = temp;
    }
}
void print(Node* tail){
    Node* temp = tail;
   do{
    cout<<tail -> data<<" ";
    tail = tail -> next;
   }while(tail!=temp);
    cout<<endl;
}

void deletenode(Node* tail, int element){
    //list is empty
    if(tail == NULL){
        cout<<"list is empty";
    }
    // list is not empty
    else{
        Node* prv = tail;
        Node* cur =tail->next;
        while(cur -> data != element){
            prv = cur;
            cur = cur -> next;
        }
        prv -> next = cur -> next;
        if(tail == cur){
            tail = prv;
        }
        cur -> next = NULL;
        delete cur;
    }

}
int main(){
// Node* Node1 = new Node(10);
Node* tail = NULL;
insertnode(tail, 5, 3);
print(tail);
insertnode(tail, 3, 5);
print(tail);
insertnode(tail, 5, 8);
print(tail);
insertnode(tail, 8, 10);
print(tail);
insertnode(tail, 10, 12);
print(tail);
insertnode(tail, 12, 15);
print(tail);

deletenode(tail, 3);
print(tail);



return 0;
}