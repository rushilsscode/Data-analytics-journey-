#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

int secondhighestelement(int arr[], int n){
    int firstlargest = INT_MIN;
    int ans= INT_MIN;
    for(int i=0; i<n; i++){
        firstlargest = max(arr[i], firstlargest);
    }
    for(int i=0; i<n; i++){
        if(arr[i] != firstlargest){
            ans = max(ans, arr[i]);
        }
    }
    return ans;
}
int main(){
    int n;
    cout<<"input the size of the array: ";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<secondhighestelement(arr, n);

return 0;
}