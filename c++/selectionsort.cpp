#include <iostream>
#include <climits>
using namespace std;

int selectionsort(int arr[], int n)

{
    // int min = INT_MAX;
    // int j = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
            for (int i = 0; i < n; i++)
            {
                cout << arr[i]<<" ";
            }
            cout<<endl;
        }
        cout<<"pass"<<endl;
    }
    // return 0;
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
    selectionsort(arr, n);

    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    return 0;
}