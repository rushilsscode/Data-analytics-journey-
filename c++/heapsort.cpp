#include <iostream>
using namespace std;

void heapify(int arr[], int n, int i)
{
    int largest = i;
    int leftchild = 2 * i;
    int rightchild = 2 * i + 1;

    if (leftchild < n && arr[largest] < arr[leftchild])
    {
        largest = leftchild;
    }
    if (rightchild < n && arr[largest] < arr[rightchild])
    {
        largest = rightchild;
    }
    if (largest != i)
    {
        swap(arr[largest], arr[i]);
        heapify(arr, n, largest);
    }
}
void heapsort(int arr[], int n)
{
    int size = n-1 ;

    while (size > 1)
    {
        swap(arr[1], arr[size]);
        size--;
        heapify(arr, size, 1);
    }
}
void print(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{

    int arr[8] = {-1, 84, 23, 63, 8, 14, 54, 46};
    heapsort(arr, 8);
    cout << "Array after sorting the array by using Heapsort ";
    print(arr, 8);
    return 0;
}