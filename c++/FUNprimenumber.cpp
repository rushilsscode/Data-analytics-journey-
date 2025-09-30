#include <iostream>
#include <math.h>
using namespace std;

bool check(int x)
{
    // int count=0;
    for (int i = 2; i <= sqrt(x); i++)
    {
        if (x % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int a, b;
    cin >> a >> b;
    for (int i = a; i <= b; i++)
    {
        if (check(i))
        {
            cout << i << endl;
        }
    }
    return 0;
}