// Staircase Problem 2019
#include <iostream>
using namespace std;
int combination(int n){
    if(n==0 || n==1){
       return 1;
    }
    // if(dp[n] != -1){
    //     return dp[n];
    // }
    return dp[n] = combination(n-1) + combination(n-2);
    
}
int main(){
    int n;
    cin>>n;
    // int dp[n-1] = {-1};
    cout<<combination(n);
return 0;
}