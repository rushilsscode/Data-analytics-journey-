#include <iostream>
using namespace std;
void permutate(int arr[], int n, int* solarr[], int m){
    int k=0;
        for(int i=0; i<n; i++){
            for (int j = 0; (j<n & j!=i); j++)
            {
                int temp =arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                solarr[k]=arr;
                k++;
            
            }
        
        }
        for (int p = 0; p < m; p++)
        {
            cout<<solarr[p]<<" ";
        }
        
    
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int m=1;
    for (int i = 1; i <=n; i++)
    {
        m*=n;
    }
    
    int* solarr[m];
    for (int i = 0; i < m; i++)
    {
        solarr[i]=0;
    }
    permutate(arr, n, solarr, m);
    
    

return 0;
}