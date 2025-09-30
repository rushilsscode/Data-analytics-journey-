#include <iostream>
using namespace std;

int fac(int x)
{
    int factorial = 1;

    for (int i = 2; i <= x; i++)
    {
        factorial *= i;
    }
    return factorial;
}

int main()
{

    int n, r;
    cout<<"enter the value of n and r"<<endl;
    cin >> n >> r;

    int ans = fac(n) / (fac(r) * fac(n - r));
    cout << ans;

    return 0;
}