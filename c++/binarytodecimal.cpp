#include <iostream>
using namespace std;

int binarytodecimal(int n)
{

    int num = 0;
    int x = 1;

    while (n > 0)
    {
        // int i = 0;
        int rem = n % 10;
        num = num + x * rem;
        x = x * 2;

        n = n / 10;
    }
    return num;
}
int main()
{
    int n;
    cout << "enter a binary number=";
    cin >> n;
    cout << "decimal number=" << binarytodecimal(n);

    return 0;
}