#include <iostream>
using namespace std;
int main()
{

    int n, m;
    cin >> n >> m;
    int arr[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    // spiral order print

    int row_start = 0;
    int row_ends = n - 1;
    int col_start = 0;
    int col_ends = m - 1;

    while (row_start <= row_ends && col_start <= col_ends)
    {
        // for row start
        for (int col = col_start; col <= col_ends; col++)
        {
            cout << arr[row_start][col] << " ";
        }
        row_start ++;

        // for column_end

        for (int row = row_start; row <= row_ends; row++)
        {
            cout << arr[row][col_ends] << " ";
        }
        col_ends--;

        // for row_end

        for (int col = col_ends; col >= col_start; col--)
        {
            cout << arr[row_ends][col] << " ";
        }
        row_ends--;

        // for col_start
        for (int row = row_ends; row >= row_start; row--)
        {
            cout << arr[row][col_start] << " ";
        }
        col_start++;
    }

    return 0;
}