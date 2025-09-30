#include <iostream>
using namespace std;

int quicksort(int arr[], int p, int q)
{
    int m;
    if (p == q)
    {
        return (arr[p]);
    }

    else
    {
        int m = partition(arr, p, q);
        quicksort(arr, p, m - 1);
        quicksort(arr, m + 1, q);
        return arr[p];
    }
}

int partition(int arr[], int p, int q)
{
    int x = arr[p];
    int i = p;
    for (int j = p + 1; j < q; j++)
    {
        if (arr[j] <= x)
        {
            i = i + 1;
            int temp = arr[i];
            arr[i] = arr[j];
        }
    }
}
int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << quicksort(arr, 1, n);

    return 0;
}