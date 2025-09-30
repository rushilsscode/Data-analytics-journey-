#include <iostream>
#include <vector>
using namespace std;
int main(){
    int arr[4] = {1,2,3,4};
    vector<vector<int>> subarray;
    for (int i = 0; i < 4; i++)
    {
        vector<int> brr;
        brr.push_back(arr[i]);
        subarray.push_back(brr);
        for (int j = i+1; j < 4; j++)
        {
            brr.push_back(arr[j]);
            subarray.push_back(brr);
        }
    }
    for (int i = 0; i < subarray.size(); i++)
    {
        for (int j = 0; j < subarray[i].size(); j++)
        {
            cout<<subarray[i][j]<<" ";
        }
        cout<<endl;
    }
    

return 0;
}