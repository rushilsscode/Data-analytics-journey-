// Given an array of a[] of size n. for every i from 0 to n-1 output max(a[0],a[1],...a[i])
// #include <iostream>
// #include <math.h>
// #include <cmath>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "input the size of arrary: ";
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     int k; // here k is the index of upto which value we want to check
//     cin >> k;
//     int M = 0;
//     for (int i = 0; i < k; i++)
//     {
//         M = max(M, arr[i]);
//     }
//     cout << M;

//     return 0;
// }

// **************************** SUBARRAY**********************

// Given an array of size n find the sum of each subarray of the given array

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "input the size of arrary:";
    cin >> n;
    int arr[n];
    
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum = arr[j] + sum;
            cout << sum << endl;
        }
    }

    return 0;
}

// longest arthemetic array: To find the consecutive arthematic subarray whose difference is commom 

#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "input the size of arrary:";
    cin >> n;
    int arr[n];
    int pd=0;
    
    for (int i = 0; i < n-1; i++)
    {
        int curr=arr[i+1]-arr[i];
        if (pd==curr)
        {
            
        }
        
    }
    

return 0;
}