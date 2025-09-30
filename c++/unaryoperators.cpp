#include<iostream>
using namespace std;

int main(){
int i=0;
int j=1;
int k=2;
int m;

m = i++ + j++ + --k;
//2  0     1      1

cout<<i<<endl;//1
cout<<j<<endl;//2
cout<<k<<endl;//1
cout<<m<<endl;//2
return 0;
}