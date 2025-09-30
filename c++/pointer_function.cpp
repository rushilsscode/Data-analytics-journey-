#include <iostream>
using namespace std;

void print(int *p){

    cout<<*p<<endl;

}

void update(int *p){

    // p=p+1;
    // cout<<"inside value "<<p<<endl;                                  
    *p=*p+1;
}

int getsum(int *arr, int n){
    int sum=0; 
    for (int i = 0; i < n; i++)
    {
        sum=sum+arr[i];
    }
    return sum;
}
int main(){

    // int value=9;
    // int *p = &value;

    // print(p);

    // cout<<"value of p before upadate "<<p<<endl;
    // update(p);
    // cout<<"value of p after upadate "<<p<<endl; 

    // cout<<"value of p before upadate "<<*p<<endl;
    // update(p);
    // cout<<"value of p after upadate "<<*p<<endl;

    int arr[6]={1,2,3,4,5,6};

    cout<<"sum is " << getsum(arr+3,3);

return 0;
}