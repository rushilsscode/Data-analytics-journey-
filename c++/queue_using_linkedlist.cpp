#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};
class queue{
    public:
        Node* front;
        Node* rear;
    
        queue(){
            front = NULL;
            rear  = NULL;
        }
    void push(int data){
        Node* temp = new Node(data);
        if(front == NULL && rear == NULL){
            front = temp;
            rear = temp;
            return;
        }
        else{
            rear->next = temp;
            rear = rear -> next;
        }
    }
    int pop(){
        if(front == NULL){
           return -1; 
        }
        int ans = front->data;
        Node* temp = front;
        front = front->next;
        if(front == NULL){
            rear = NULL;
        }
        delete temp;
        return ans;
    }
    int frt(){
        if(front == NULL){
            return -1;
        }
        return front->data;
    }
    void print(){
        if(front == NULL){
            cout<<"queue is empty."<<endl;
            return;
        }
        else{
            Node* temp = front;
            while(temp != NULL){
                cout<<temp -> data<<endl;
                temp = temp->next;
            }
        }
    }
};
int main(){

    queue q;
    q.push(10);
    q.push(12);
    q.push(13);
    q.print();
    cout<<q.frt()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.frt()<<endl;
return 0;
}