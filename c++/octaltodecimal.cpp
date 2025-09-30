#include <iostream>
using namespace std;

int octaltodecimal(int n)
{

    int num = 0;
    int x = 1;

    while (n > 0)
    {
        int rem = n % 10;
        num = num + (rem * x);
        x = x * 8;
        n = n / 10;
    }
    return num;
}
int main()
{
    int n;
    cout << "enter the octal number:";
    cin >> n;
    cout << "decimal number:" << octaltodecimal(n);
    return 0;
}