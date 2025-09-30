#include <iostream>
using namespace std;
    // Implementation of maxheap using Array 
    class heap{
        public:
        int arr[100];
        int size;
        
        heap(){
            arr[0] = -1;
            size = 0;
        }

        void insert(int val){
            size = size+1;
            int index = size;
            arr[index] = val;

            while(index > 1){
                int parent = index/2;

                if(arr[parent] < arr[index]){
                    swap(arr[parent], arr[index]);
                    index = parent;
                }
                else{
                    return;
                }
            }
        }
        // delete the root node
        void print(){
            for(int i=0; i<=size; i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
        void deletion() {    
            if(size == 0){
                cout<<"nothing to delete";
                return;
            }
            arr[1] = arr[size];
            size--;

            int index = 1;
            
            while(index <  size){
                int lchild = 2*index;
                int rchild = 2*index+1;
                if(lchild < size && arr[index] < arr[lchild]){
                    swap(arr[index], arr[lchild]);
                    index = lchild;
                }

                else if(rchild < size && arr[index] < arr[rchild]){
                    swap(arr[index], arr[rchild]);
                    index = rchild;
                }
                else{ 
                    return ;
                }
            }
        }
    };

    void heapify(int arr[], int n, int i){
        int largest = i;
        int leftchild = 2*i;
        int rightchild = 2*i+1;

        if(leftchild < n && arr[largest] < arr[leftchild]){
            largest = leftchild;
        }
        if(rightchild < n && arr[largest] < arr[rightchild]){
            largest = rightchild;
        }
        if(largest != i){
            swap(arr[largest], arr[i]);
            heapify(arr, n, largest);
        }
       
    }
    int main(){
        heap h;
        h.insert(55);
        h.insert(56);
        h.insert(51);
        h.insert(53);
        h.insert(58);
        h.insert(48);
        cout<<"maxheap before deletion: ";
        h.print();
        h.deletion();
        cout<<"maxheap after deletion: ";
        h.print();

        // heapify - converting heap from a given array

        int arr[6] = {-1, 34, 45, 54, 32, 42};
        int n = 5;

        for(int i = n/2; i>0; i--){
            heapify(arr, n, i);
        }
        cout<<"printing array for heapify ";
        for(int i=1; i<=n; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        return 0;
    }