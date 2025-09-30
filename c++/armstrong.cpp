#include<iostream>
#include<math.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    int arm=0;
    int org=n;
    while (n!=0)
    {
        int digit = n%10;
        arm+= pow(digit,3);
        n=n/10;
    }
    if (org==arm)
    {
        cout<<"number is armstrong number";
    }
    
    else{
        cout<<"number is not a armstrong number";
    }
    

return 0;
}