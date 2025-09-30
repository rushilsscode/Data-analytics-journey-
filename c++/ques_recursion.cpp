// // **********sum of n numbers****************
// #include <iostream>
// using namespace std;

// int sum(int n){

//     if (n==0){
//         return 0;
//     }
    
//     int prevsum=n + sum(n-1);
//     return prevsum;
// }
// int main(){

//     int n;
//     cin>>n;

//     cout<<sum(n);

// return 0;
// }

// *****************calculate n rasied to power of p**********

// #include <iostream>
// using namespace std;

// int power(int n, int p){

//     if (p==0)
//     {
//         return 1;
//     }
    

//     int prevpower=power(n, p-1);
//     return n*prevpower;

// }
// int main(){

//     int n,p;
//     cin>>n>>p;

//     cout<<power(n,p);

// return 0;
// }

// ****************factorial********

// #include <iostream>
// using namespace std;

// int fact(int n){

//     if (n==0)
//     {
//         return 1;
//     }
    

//     int prevfact=fact(n-1);
//     return n*prevfact;
// }
// int main(){

//     int n;
//     cin>>n;

//     cout<<fact(n);

// return 0;
// }

// *****************fibonacci*************

// #include <iostream>
// using namespace std;

// int fic(int n){

//     if (n==0 || n==1 )
//     {
//         return n;
//     } 
//     return fic(n-1) + fic(n-2);
// }
// int main(){
// int n; 
// cin>>n;

// cout<<fic(n);
// return 0;
// }

// ***************check the given array is sorted or not************

#include <iostream>
using namespace std;

bool sorted(int arr[], int n){
    if (n==1)
    {
        return true;
    }
    
    bool restarr=sorted(arr+1,n-1);
    return (arr[0] < arr[1] && restarr);
}
int main(){
    int arr[]={1,2,5,6,22};
    cout<<sorted(arr, 5);
return 0;
}