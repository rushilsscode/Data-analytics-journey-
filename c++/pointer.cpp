// *************** pointers are the variable which stores the address of other variable **************************
// #include <iostream>
// using namespace std;
// int main(){

// int a = 10;
// int *aptr;
// aptr = &a;

// cout<<&a<<endl;
// cout<<aptr<<endl;
// cout<<&aptr<<endl;

// cout<<*aptr<<endl;
// *aptr = 50;
// cout<<a<<endl;

// return 0;
// }

// *******************pointer arthemetic ***************

// #include <iostream>
// using namespace std;
// int main(){
// int a = 10;;
// int *pta = &a;

// cout<<++a<<endl;
// // cout<<pta<<endl;
// cout<<++*pta<<endl;

// int **q=&pta;
// cout<<q<<endl;
// return 0;
// }

// ************passing pointers to the function **********

#include <iostream>
using namespace std;
// void swap(int *a, int *b){
//     int temp = *a;
//     *a=*b;
//     *b=temp;
//     // cout<<a<<b;

// }
int main(){
// int a=2;
// int b=4;

// int *p=&a;
// int *q=&b;

// swap(p,q);
// cout<<a<<b;


// **************** Pointer in array ***********************

// int arr[10] = {3,5,6};

// cout<<"address of first memory block is  "<< arr << endl;
// cout<<"address of first memory block is  "<< &arr[1] << endl;

// cout<<"value of first memory block is  "<< arr + 1 << endl;
// cout<<"value of first memory block is  "<< *arr + 1 << endl;
// cout<<"value of first memory block is  "<< *(arr + 1) << endl;
// cout<<"value of first memory block is  "<< &arr + 1 << endl;

// arr[i] = *(arr+i)
// i[arr] = *(i+arr)

// cout<<2[arr];

// int temp[4] = {1,3,4,5};

// int a=9;
// int *b=&a;
// // cout<< *b <<endl;

// // cout<< temp<<endl;

// int *ptr = &temp[4];
// // cout<<
// // int *p=temp+1;
// // cout<<*p<<endl;
// cout<< ptr <<endl;
// cout<< *ptr <<endl;
// cout<< sizeof(*ptr)<<endl;
// cout<< sizeof(ptr)<<endl;

int arr[4] = {1,2,3,4};

int *ptr = &arr[4];

cout<<arr<<endl;
cout<<*ptr<<endl;
return 0;
}




