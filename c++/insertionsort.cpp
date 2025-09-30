#include <iostream>
#include <climits>
using namespace std;

int insertionsort(int arr[], int n)

{

    for (int i = 1; i < n; i++)
    {
        int j = i - 1;
        int current = arr[i];
        while (arr[j]>current && j>=0)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current;
    }
}

int main()
{

    int n;
    cout << "size of the array:";
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    insertionsort(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}