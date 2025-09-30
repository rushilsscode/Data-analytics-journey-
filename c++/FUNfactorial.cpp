// // ********************** my code ******************
// #include <iostream>
// using namespace std;

// int fac(int m)
// {
//     int f1 = 1;
//     int f2;

//     for (int i = m; i >1; i--)
//     {

//         f2 = f1 * i;
//         f1 = f2;
//         cout<<f1<<endl;
//     }
//     return f1;
// }

// int main()
// {

//     int n;
//     cin >> n;
//     cout<<fac(n)<<endl;

//     return 0;
// }

// ***************** didi's code ***************

#include <iostream>
using namespace std;

int fac(int n)
{
    int factorial = 1;
    for (int i = 2; i <= n; i++)
    {
        factorial*= i; // we can also write it as factorial=factorail*i //
    }
    return factorial;
}

int main()
{

    int n;
    cin >> n;

    // int ans = fac(n);
    cout << fac(n)<< endl;
    return 0;
}
