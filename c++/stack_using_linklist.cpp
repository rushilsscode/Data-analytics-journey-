// *************************** STACK USING LINKLIST************************
#include<iostream>
using namespace std;

class Stack{
    public:
    int val;
    Stack* next;
    
    Stack(int d){
        this -> val = d;
        this -> next = NULL;
    }

    void push(int element,Stack* &head,Stack* &tail){
        Stack *newNode = new Stack(element);
        if( head == NULL){
            //first element push
            head = newNode;
            tail = newNode;
            return;
        }else{
            //assuming element is present
            tail -> next = newNode;
            tail = newNode;
        }
    }

    void pop(Stack* &head,Stack* &tail){
        if( head == NULL){
            //if no element is present
            cout << "Stack Underflow "<<endl;
        }else{
            //edge case for last element
            if( head == tail){
                head = NULL;
                return;
            }
            Stack* temp = head;
            while( temp -> next != tail){
                temp = temp -> next;
            }
            temp -> next = NULL;
            tail = temp;

        }
    }

    int peek(Stack* &tail){
        if( tail == NULL){
            cout << "Stack Underflow " << endl;
        }else{
            return tail -> val;
        }
    }

    bool isEmpty(Stack* &head){
        if( head == NULL){
            return true;
        }else return false;
    }

};
void print( Stack* &head){
    Stack* temp = head;
    if( temp == NULL) cout << temp -> val << endl;
    while(temp != NULL){
        cout<< temp ->  val << " ";
        temp = temp -> next;
    }
    cout<<endl;
}

int main(){
    Stack *head = NULL;
    Stack *tail = NULL;
    Stack st(0);
    st.push(4,head,tail);
    st.push(8,head,tail);
    st.push(6,head,tail);
    print(head);


    cout <<"Peek element is "<< st.peek(tail) <<endl;

    st.pop(head,tail);

    print(head);
    
    cout<<"Peek element is "<<st.peek(tail) <<endl;

    st.pop(head,tail);

    print(head);

    st.pop(head,tail);

    if( st.isEmpty(head)){
        cout << "Stack is empty "<<endl;
    }else{
        cout<< "Stack is not empty"<<endl;
    }

    return 0;
}

// #include <iostream>
// using namespace std;
// class stack{
//     public:
//     int val;
//     stack* next;

//     stack(int data){
//         this -> val = data;
//         this -> next = NULL;
//     }

//     void push(int element, stack* &head, stack* &tail){
//         stack* newnode  = new stack(element);
//         if(head == NULL){
//             head = newnode;
//             tail = newnode;
//             return;
//         }
//         else{
//             tail -> next = newnode;
//             tail = newnode;
//         }
//     }
//     void top(stack* head){
//         if(head == NULL){
//             cout<<"stack is underflow";
//         }
//         else{
//             cout<<head->val;
//         }
//     }

// };
// int main(){
//     stack* head = NULL;
//     stack* tail = NULL;
//     stack st(5);
//     st.push(5, head, tail);
//     st.push(8,head,tail);
//     st.push(10,head,tail);
//     st.top(head);

// return 0;
// }