#include <iostream>
using namespace std;

bool issorted(int arr[], int n){
    if(n == 0 || n == 1){
        return true;
    }
    if (arr[0]>arr[1])
    {
        return false;
    }
    else{
        issorted(arr+1,n-1);
    }
    
}
int main(){
    int arr[6]={2,3,8,8,8,8};
    int n=5;
    bool ans = issorted(arr,n);
    cout<<ans;
return 0;
}