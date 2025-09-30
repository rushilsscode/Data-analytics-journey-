#include <iostream>
using namespace std;

int sum(int n ){

    int k=0;
    for (int i =1; i <=n; i++)
    {
        k+=i; // k = k +i //
    }
    return k;
}

int main()
{

    int n;
    cout << "enter a number" << endl;
    cin >> n;
    cout<<sum(n)<<endl;



    return 0;
}