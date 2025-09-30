#include <iostream>
using namespace std;

bool linearsearch(int arr[], int n, int key){
    if (n==0)
    {
        return false;
    }
    if(arr[0]==key){
        return true;

    }
    else{
        linearsearch(arr+1, n-1, key);
    }
    
}
int main(){
    int arr[6]={22,34,43,52,61,33};
    int n=6;
    int key=50;
    bool ans = linearsearch(arr, n, key);
    cout<<ans;
return 0;
}