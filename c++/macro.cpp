#include <iostream>
using namespace std;

#define PI 2.34
#define AREA(l, b) (l*b)

#define instagram followers // chain marcos
#define followers 5400

// multiline marcos
// #define ele 1, \ 
//             2, \
//             3, \

int main(){

    int r = 5;
    double area = PI*r*r;
    cout<<"area of a circle "<<area<<endl;
    int l1=3;
    int l2=4;
    int area1 =  AREA(l1,l2);
    cout<<"area of ractangle "<<area1<<endl;

    cout<<"my instagram followers are "<<followers;

    // int arr[] = {ele}; // assigning values with the help of marcos


return 0;
}