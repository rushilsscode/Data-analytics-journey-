#include <iostream>
using namespace std;

int maxMoney(int ind, int arr[]){
    if(ind < 0){
        return 0;
    }

    int rob = arr[ind] +  maxMoney(ind-2, arr );
    int notrob = maxMoney(ind-1, arr);
    return max(rob, notrob); 
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<maxMoney(n-1, arr);
return 0;
}