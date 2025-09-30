#include <iostream>
using namespace std;

int func(int n){
    int ans = n+2;
    return ans;

}

int upadte2(int& a){ // here we initialize the reference variable 
    a++;
    
}

// int upadte1(int n){  // here we copy the value and intialize n.
//     n++;
// }
int main(){
int a=8;


// cout<<"before upadte1"<<endl;
// cout<<upadte1(a)<<endl;
// cout<<"after upadte1"<<endl;


cout<<"before upadte2 "<<a<<endl;
upadte2(a);
cout<<"after upadte2 "<<a<<endl;

cout<<func(a);


return 0;
}