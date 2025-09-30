#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{

    string str = "lksdfvndlk";
    
    // cout<<'a'-'A'; // ans will be 32 

    // converting lowercase to uppercase

    // for (int i = 0; i < str.size(); i++)
    // {
    //     if (str[i] >= 'a' && str[i] <= 'z')
    //     {
    //         str[i] -= 32;
    //     }
        
    // }
    // cout<<str;

    // converting lowercase to uppercase by using function

    transform(str.begin(), str.end(), str.begin(), ::toupper);
    cout<<str<<endl;
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    cout<<str<<endl;
    return 0;
}