#include <iostream>
using namespace std;



bool checkpal(string& s, int i, int j){
    if(i>j){
        return true;
    }

    if(s[i]!=s[j]){
        return false;
    }
    else{
    i++;
    j--;
    checkpal(s,i,j);

    }
}
int main(){
string s ="abbab";
// int size=s.length()-1;

bool ans = checkpal(s, 0, s.length()-1);
cout<<ans;

return 0;
}