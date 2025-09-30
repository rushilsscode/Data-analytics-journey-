#include <iostream>
#include <set>
using namespace std;
int main(){
    int n;
    cin>>n;
    set<int> st;
    for(int i=3; i<=n; i++){
        bool flag = 0;
        for(int j=2; j<n/2; j++){
            if(n%j==0){
                flag = 1;
                break;
            }
        }
        if(flag == 0){
            st.insert(j);
        }
    }
return 0;
}