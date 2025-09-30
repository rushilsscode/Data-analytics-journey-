#include <iostream>
#include <utility>
using namespace std;
int main(){
    int s;
    int r;
    cout<<"Enter the no of samples: ";
    cin>>s;
    cout<<"Enter the no of ranges: ";
    cin>>r;
    cout<<"Enter the numbers: ";
    int samples[s];
    for(int i=0; i<s; i++){
        cin>>samples[i];
    }
    for(int i=0; i<r; i++){
        cout<<"Enter the min and max of the ranges: ";
        int left;
        int right;
        cin>>left>>right;
        int ans=0;
        for(int j=0; j<s; j++){
            if(left<samples[j] && samples[j]<right){
                ans++;
            }
        }
        cout<<ans<<endl;
    }
return 0;
}