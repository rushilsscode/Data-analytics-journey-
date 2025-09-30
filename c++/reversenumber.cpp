#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int rev=0;

    while (n>0)
    {
        int lastdigit = n%10;
        rev = rev*10 + lastdigit;
        n=n/10; //here n is a integer so it will store interger value only not after the decimal.
    }
    
    cout<<rev;

return 0;
}               