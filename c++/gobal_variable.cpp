#include <iostream>
using namespace std;

int score =9; // here score is global variable it can be used in any function 
void a(){

    cout<<score<<endl;
    // cout<<b<<endl;
}
void b(){

    cout<<score<<endl;
    // cout<<b<<endl;
}
int main(){
    int b=8; // this is local variable it can be used only in main or where we intialise a variable 
    cout<<score<<endl;
    cout<<b<<endl;

return 0;
}