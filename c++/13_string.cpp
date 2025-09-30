#include <iostream>
#include <string>

using namespace std;
int main()
{
    // 1
    string str;
    cin >> str;
    cout << str<<endl;

    // 2

    string str1(5, 'c');
    cout<<str1;
    // 3

    string str2;
    getline(cin, str2); // we use getline function when we want to input a whole line
    cout<<str2;

    return 0;
}

// different function in string

#include <iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
string s1 = "zxy";
string s2 = "zxy";

s1.append(s2); // append is use to update the string with particular command 
cout<<s1<<endl; 
// ********without using apppend funsction *******

cout<< s1 + s2 <<endl;

// ****accessing a particular character from a string ********

cout<<s1[2]; 

// ****using clear function*******

s1.clear();
s2.clear();

// ********** compare function *********

cout<<s1.compare(s2);

if(!s1.compare(s2)){
    cout<<"string is negative";

}
// ***********empty funciton ***********
if (s1.empty()){
    cout<<"empty";

}
else{
    s1.clear();
    cout<<"now empty";
}


string str="nincompoop";

// *********erase function *************
str.erase(3, 3);
cout<< str;

// **********find function *********

cout<<str.find("com");

// **************insert function**********

str.insert(2, "lol");
cout<<str; 

// **********size function**********

cout<<str.size()<<endl;

// // ********** use of length function*********

for (int i = 0; i < str.length(); i++){
    cout<<str[i]<<endl;
}

// // **********substr function*********

string s = str.substr(6, 4);
cout<< s << endl;

// ******converting string to number using stoi function 

string s = "456";

int x = stoi(s);

cout<<x;

// // ********converting number to string *********

int x = 454;
cout<< to_string(x) + "2" <<endl;  // it will work as append function 

// ***********sorting in string **********

string s1 ="dvlksnvlsvier";

sort(s1.begin(), s1.end());
cout<<s1;
return 0;
}

