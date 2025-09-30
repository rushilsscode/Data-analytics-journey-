#include <iostream>
using namespace std;

int fact(int n)
{
    int factorial = 1;

    for (int i = 2; i <= n; i++)
    {
        factorial *= i;
    }
    return factorial;
}

int pas(int x, int y)
{

    int ans = fact(x) / (fact(y) * fact(x - y));
    return ans;
}

int main()
{

    int n;
    cout<<"enter the number"<<endl;
    cin >> n;
    cout<<"here is your Pascal triangle"<<endl;
    for (int i = 0; i <n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << pas(i, j)<<" ";
        }
        cout << endl;
    }

    return 0;
}