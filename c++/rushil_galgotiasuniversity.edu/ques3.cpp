#include <iostream>
#include <map>
#include <algorithm>
using namespace std;
void findrepeatingwords(string sentence, map<string, int> &ans){
    string word;
    int i=0;
    while(i<sentence.length()){
        if(sentence[i] != ' '){
            word+=sentence[i];
        }
        else{
            ans[word]++;
            word = ' ';
        }
        i++;
    }
    for(auto i : ans){
        if(i.second > 1){
            cout<<i.first << " " << i.second<<endl;
        }
    }
}

int main(){
    string sentence;

    map<string, int> ans;
    getline(cin, sentence);

    findrepeatingwords(sentence, ans);
return 0;
}