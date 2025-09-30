#include <iostream>
#include <string>
using namespace std;

bool isnumeric(string s){
    if(s.empty()){
        return false;
    }

    for(int i=0; i<s.length(); i++){
        if(!isdigit(s[i])){
            return false;
        }
    }
    return true;
}
int main(){
    string s;
    cout<<"input the string: "<<endl;
    cin>>s;

    cout<<isnumeric(s);

return 0;
}
