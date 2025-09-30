#include <iostream>
using namespace std;

int main(){
int n;
cout<<"enter the value of n=";
cin>>n;

int arr[n];
int brr[n+1];
for(int i=0;i<n;i++){
    cin>>arr[i];
}

int count=0;
for (int i=0;i<n;i++) {
    brr[i]=arr[i];
    if(arr[i]==1){
    count++;
        
    }
if(count==5 &&  arr[i]==0)
{
    brr[i]=1;
}
}

for(int i=0;i<n;i++){
    cout<<brr[i] ;
}

    return 0;
}

