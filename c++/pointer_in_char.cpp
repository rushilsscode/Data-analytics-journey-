#include <iostream>
using namespace std;
int main(){
    int p=9;
    int arr[5] = {1,2,3,4,5};
    char ch[6] = "abcde";

    cout<<p<<endl;
    cout<<arr<<endl; // it will print the address
    cout<<ch<<endl;  // it will print the whole content

    int *q = &p;
    int *b = &arr[5];
    char *c = &ch[0];

    cout<<q<<endl; //this will give the address of p
    cout<<b<<endl; //this will give the address of arr[0]
    cout<<c<<endl; //this will give the content

    cout<<*q<<endl; //this will give the address of p
    cout<<*b<<endl; //this will give the address of arr[0]
    cout<<*c<<endl; //this will give the content
return 0;
}