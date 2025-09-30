#include <iostream>
using namespace std;
int main()
{

    int n, m;
    cin >> n >> m;
    int arr[n][n];
    int brr[m][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << "array before transpose" << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            brr[i][j] = arr[j][i];
        }
    }

    cout << "array after transpose" << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << brr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}