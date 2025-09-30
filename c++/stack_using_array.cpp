#include <iostream>
using namespace std;

class stack{
    // properties
    public:
        int *arr;
        int top;
        int size;

        stack(int size){
            this->size = size;
            arr = new int(size);
            top = -1;
        }
        void push(int element){
            if(size - top > 1){
                top++;
                arr[top] = element;
            }
            else{
                cout<<" stack overflow"<<endl;
            }
        }
        void pop(){
            if(top>=0){
                top--;
            }
            else{
                cout<<"stack under"<<endl;
            }
        }
        int peek(){
            if(top >=0 && top< size){
                return arr[top];
            }
            else{
                cout<<"stack is empty"<<endl;
            }
        }
        bool ismpty(){
            if(top >= 0 ){
                top--;
            }
        }
};
int main(){
    stack st(5);
    st.push(22);
    st.push(25);
    st.push(23);

    cout<<st.peek();    



return 0;
}