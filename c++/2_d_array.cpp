#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n, m;
    cout << "n: ";
    cin >> n;
    cout << "m: ";
    cin >> m;
    int key;
    cin >> key;
    vector<vector<int>> brr;
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << "arr[" << i << "]" << "[" << j << "] : ";
            cin >> arr[i][j];
        }
        cout << brr.size();
        cout << brr[0].size();
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (key == arr[i][j])
            {
                cout << "element found" << endl;
                // break;
            }
            else
            {
                cout << "not found" << endl;
            }
        }
    }

    return 0;
}