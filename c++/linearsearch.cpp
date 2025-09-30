// **********************************code without using function***************************
// linear search is a process in which a given number is searched by checking number by number.
#include <iostream>
using namespace std;
int main()
{

    int arr[6] = {12, 34, 45, 67, 78, 68};
    int key;
    cin >> key;

    for (int i = 0; i < 6; i++)
    {
        if (key == arr[i])
        {
            cout << i << endl;
        }
    }

    return 0;
}

// ***************************************code with using function********************************

#include <iostream>
using namespace std;

int linearsearch(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++) // here (n+1) is the time complexity for this loop
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}

int main()
{

    int n;
    cout << "enter the size of array n:";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) // here (n+1) is the time complexity for this loop
    {
        cin >> arr[i];
    }

    int key;
    cin >> key;

    cout << linearsearch(arr, n, key); 

    return 0; // for this code time complexity is O(n).
}