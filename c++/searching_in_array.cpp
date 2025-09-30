#include <iostream>
using namespace std;
int main()
{
    int n1, n2;
    cin >> n1 >> n2;
    int arr[n1][n2];
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            cin >> arr[i][j];
        }
    }
    int key;
    cin >> key;
    int r = 0, c = n2-1;
    while(r < n1 and c >= 0){
        if(arr[r][c]==key){
            cout<<"True"<<endl;
            cout<<r<<c;
            break;
        }
        else if(arr[r][c]>key){
            c--;
        }
        else{
            r++;
        }
    }

    return 0;
}