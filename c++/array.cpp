#include <iostream>
#include<climits>
using namespace std;
int main()
{

    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cout<<"arr["<<i<<"]=";
        cin >> arr[i];
    }

    int maxNo=INT_MIN;
    int minNo=INT_MAX;

    for (int i = 0; i <= 4; i++)
    {
        if (arr[i] > maxNo)
        {
            maxNo = arr[i];
        }
        if (arr[i] < minNo)
        {
            minNo = arr[i];
        }
    }
    cout<<"max No:"<<maxNo<<endl;
    cout<<"min No:"<<minNo<<endl;

    return 0;
}