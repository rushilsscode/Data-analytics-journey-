#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    // sorting of array
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (arr[j] > arr[j + 1]){
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}

//***************************************************** didi's code*******************************************

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;

//     int arr[n];

//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     int count = 1;
//     while (count < n)
//     {
//         for (int i = 0; i < n - count; i++)
//         {
//             if (arr[i] > arr[i + 1])
//             {
//                 int temp = arr[i];
//                 arr[i] = arr[i + 1];
//                 arr[i + 1] = temp;
//             }
//         }
//         count++;
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }