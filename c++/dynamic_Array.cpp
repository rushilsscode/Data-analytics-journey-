#include <iostream>
using namespace std;

// int getsum(int *arr, int n){

//     int sum=0; 

//     for (int i = 0; i < n; i++)
//     {
//         sum+=arr[i];
//     }
//     return sum;
    
// }
int main(){

// int* a = new int; // for the variable 

// int n;
// cin>>n;

// int* arr = new int[n];

// for (int i = 0; i < n; i++)
// {
//     cin>>arr[i];
// }

// cout<<"sum of the array is "<<getsum(arr, n);

// while (true) // static representation
// {
//     int a = 9;
// }

// ****************** 2d array *******************

int row;
cin>>row;

int col;
cin>>col;

// creating a 2D array 
int** arr = new int*[row];
for (int i = 0; i < row; i++){
    arr[i] = new int[col];
}


// taking inputs
for (int i = 0; i < row; i++){
    for (int j = 0; j < col; j++){
        cin>>arr[i][j];
    }
}

// taking output
for (int i = 0; i < row; i++){
    for (int j = 0; j < col; j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}

// releasing memory
for (int i = 0; i < row; i++)
{
    delete [] arr[i];
}
delete []arr;



return 0;
}