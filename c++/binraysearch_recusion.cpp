#include <iostream>
using namespace std;

bool binarysearch(int arr[], int s, int e, int key){
    if (s>=e)
    {
        return false;
    }
    int mid=(s+e)/2;

    if(arr[mid]==key){
        return true;
    }
    else if (arr[mid]>key)
    {
        return binarysearch(arr, s, mid-1, key);
    }
    else{
        return binarysearch(arr, mid+1, e, key);
        
    }
    
}
int main(){
    int arr[6]={23,43,55,67,87,96};
    int n=6;
    int key=85;
    int s=0;
    int e=n-1;
    bool ans=binarysearch(arr,s,e,key);
    cout<<ans;     
return 0;
}