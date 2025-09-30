#include <iostream>
using namespace std;

bool ispowerof_2(int n){
    return (n && !(n & (n-1)));
}
int main(){

    cout<<ispowerof_2(12);


return 0;
}