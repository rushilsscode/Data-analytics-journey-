#include <iostream>
using namespace std;

class queue{
    public:
    int *arr;
    int front;
    int rear;
    int size;

    queue(int size){
        this -> size = size;
        arr = new int[size];
        front = 0;
        rear  = 0;
    }

    bool isempty(){
        if(front == rear){
            return true;
        }
        else{
            return false;
        }
    }
    void push(int data){ // inqueue
        if(rear == size){
            cout<<"queue is Full"<<endl;
        }
        else{
            arr[rear] = data;
            rear++;
        }
    }
    int pop(){ //dequeue
        if(rear == front){
            cout<<"queue is empty"<<endl;
            return -1;
        }
        else{
            int ans = arr[front];
            arr[front] = -1;
            front++;
            if(front == rear){
                front =0;
                rear = 0;
            }
            return ans;
        }
    }
    int frt(){
        if(front == rear){
            return -1;
        }
        else{
            return arr[front];
        }
    }

};
int main(){
    queue q(5);
    q.push(2);
    q.push(5);
    q.push(6);
    cout<<q.isempty()<<endl;
    cout<<q.frt()<<endl;
    q.pop();
    cout<<q.frt()<<endl;
return 0;
}