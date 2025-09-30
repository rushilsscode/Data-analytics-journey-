#include <iostream>
using namespace std;

int get_bit(int n, int i){
    return((n & (1<<i))!=0);
}

int set_bit(int n, int i){
    return(n | (1<<i));
}

int clear_bit(int n, int i){
    return(n & (~(1<<i)));
}

int update_bit(int n, int i, int value){
   int mask = ~(1<<i);
   int k = n & mask;
   return(k | (value<<i));
}
int main(){
// GET BIT 
// cout<<get_bit(5,1)<<endl;
// cout<<set_bit(5,1)<<endl;
// cout<<clear_bit(5,2)<<endl;
cout<<update_bit(5,1,1);

return 0;
}